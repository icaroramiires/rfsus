/*
 * Comunicacao.cpp
 *
 *  Created on: 20 de mar de 2016
 *      Author: webmaster
 */

#include <ComunicacaoConsulta.h>
#ifdef __linux__
#include <stdio.h>
#include <fcntl.h>
#endif

ComunicacaoConsulta::ComunicacaoConsulta(char* porta) {
	hPorta = 0;
	this->porta = porta;
}

int ComunicacaoConsulta::iniciar() {
	int resultado = EXIT_SUCCESS;

#if _WIN32 || _WIN64
hPorta = CreateFile(porta, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
	if(hphPorta == INVALID_HANDLE_VALUE) {
		resultado = GetLastError();
	}else {
		DCB dcb;
		memset(&dcb, 0, sizeof(dcb));
		dcb.DCBlength = sizeof(dcb));
		dcb.BaudRate = CBR_9600;
		dcb.Parity = NOPARITY;
		dcb.StopBits = ONESTOPBIT;
		dcb.BySize = 8;

		if(!SetCommState(hPorta, &dcb)) {
			resultado = GetLastError();
		}
	}
#endif
#ifdef __linux__
	hPorta = open(porta, O_RDWR | O_NOCTTY | O_NDELAY);
	if(hPorta == -1) {
		resultado = EXIT_FAILURE;
	} else {
		fcntl(hPorta, F_SETFL, 0);
	}
#endif
	Sleep(2000);
	return resultado;
}

int ComunicacaoConsulta::ler(char* buffer, long unsigned int byteParaLer) {
	int resultado = EXIT_FAILURE;
	long unsigned int bytesLidos = 0;
#if _WIN32 || _WIN64
	ReadFile(hPorta, buffer, bytesParaLer, &bytesLidos, NULL);
#endif
#ifdef __linux__
	bytesLidos = read(hPorta, (void*)buffer, byteParaLer);
#endif
	if(byteParaLer == bytesLidos) {
		resultado = EXIT_SUCCESS;
	}
	return resultado;
}

int ComunicacaoConsulta::finalizar() {
#if _WIN32 || _WIN64
	CloseHandle(hPhPorta);
#endif

#ifdef __linux__
	close(hPorta);
#endif
	return EXIT_SUCCESS;
}
