/*
 * ComunicaçãoUsuarioSistema.cpp
 *
 *  Created on: 12/08/2015
 *      Author: andre
 */

#include "serial/SerialComm.h"
#include "observadores/ObservadorSerial.h"
#include "notificacoes/NotificacaoRFID.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

// convencoes de configuracao da comunicao serial/usb
#define COM_PORTA "/dev/ttyACM0"     // porta de comunicacao USB com Arduino

#ifdef __linux__
// macro para acesso a comando de sleep no linux
#include <unistd.h>
#define Sleep(x) usleep(x * 1000);
#endif

int main() {

	// cria instancia da classe comunicacao USB
	SerialComm serial(COM_PORTA);

	// cria instancia da classe Observador
	ObservadorSerial observador(serial);

	// cria instancia da classe NotificadorRFID
	NotificacaoRFID notificacaoRFID;

	observador.addNotificacao(&notificacaoRFID);

	//Chamada para iniciar o observador
	observador.iniciar();

	//Loop para o programa não fechar
	while (true) {
		Sleep(1000);
		//cout << "To dormindo" << endl;
	}
}

