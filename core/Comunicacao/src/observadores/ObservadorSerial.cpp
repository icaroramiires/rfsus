#include <iostream>
#include <string.h>
#include "observadores/ObservadorSerial.h"
#include "serial/SerialComm.h"

#define INTERVALO_LEITURA  500 		// intervalo entre cada leitura e envio de comando
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// OBSERVADOR SERIAL ////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

// referencia aa ultima informacao lida pelo leitor serial
string sensor;

NotificacaoSerial::~NotificacaoSerial() {
	cout << "";
}

ObservadorSerial::ObservadorSerial(SerialComm leitorSensores) :
		leitor(leitorSensores) {
	finalizado = true;
	thread = 0;
	sensor = "";
}

#if defined _WIN32 || _WIN64
DWORD WINAPI execRFID(LPVOID arg)
#endif
#ifdef __linux__
void *execRFID(void *arg)
#endif
		{
	ObservadorSerial *obs = (ObservadorSerial *) arg;
	obs->observar();

	return 0;
}

void ObservadorSerial::iniciar() {
#if defined _WIN32 || _WIN64
	thread = CreateThread(NULL, 0, execRFID, (void *) this, 0, NULL);
#endif
#ifdef __linux__
	pthread_create(&thread, NULL, execRFID, (void *) this);

#endif
}

void ObservadorSerial::addNotificacao(NotificacaoSerial *notificacao) {
	notificacoes.push_back(notificacao);
}

void ObservadorSerial::observar() {

	//Inicia porta serial através de um teste
	if (leitor.iniciar() != 0) {
		cout << "erro ocorrido" << endl;

		return;
	}

	//Variável que armazena o valor lido da porta serial
	string valorLido = "";

	//Variavel que define armazena a quantidade de bytes lidos da porta serial
	long unsigned int bytesLidos;

	// Variavel que define o tamanho da informacao ser lida na porta serial
	const long unsigned int TAM_RFID = 13;

	finalizado = false;

	while (!finalizado) {
		valorLido = leitor.ler(TAM_RFID, bytesLidos);

		if (bytesLidos > 0) {
			//out << "valor lido = " << valorLido << endl;
			list<NotificacaoSerial *>::iterator i;

			for (i = notificacoes.begin(); i != notificacoes.end(); i++) {
				NotificacaoSerial* notificacao = *i;

				notificacao->notificar(valorLido);
			}
		}

		//Intervalo entre leitura
		Sleep(INTERVALO_LEITURA);
	}
}

void ObservadorSerial::finalizar() {
	finalizado = true;
	Sleep(2000);
}
