/*
 * notificadorRFID.cpp
 *
 *  Created on: 02/09/2015
 *      Author: andre
 */

#include <iostream>
#include <string.h>
#include "observadores/ObservadorSerial.h"
#include "serial/SerialComm.h"
#include "notificacoes/NotificacaoRFID.h"

using namespace std;

NotificacaoRFID::~NotificacaoRFID() {

}

void NotificacaoRFID::notificar(string sensores) {
	cout << "Valor lido: " << sensores << endl;
}

