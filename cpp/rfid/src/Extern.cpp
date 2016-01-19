#include "SerialComm.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

using namespace std;

#ifdef __linux__
// macro para acesso a comando de sleep no linux
#include <unistd.h>
#define Sleep(x) usleep(x * 1000);
#endif

// tamanho maximo de rf
const long unsigned int TAM_RFID = 13;

// instancia de leitor de porta serial/usb
SerialComm serial = NULL;
string valorLido =  "";

int iniciar(char* porta) {
	serial = SerialComm(porta);

	return serial.iniciar();
}

char* ler() {
	long unsigned int bytesLidos;

	valorLido = "12345ASDL";

	/*
	string valorLido = serial.ler(TAM_RFID, bytesLidos);

	if (bytesLidos == TAM_RFID) {
		return (char*)valorLido.c_str();
	} else {
		return NULL;
	}
	*/

	return (char*) valorLido.c_str();
}

int finalizar() {
	serial.finalizar();

	return EXIT_SUCCESS;
}
