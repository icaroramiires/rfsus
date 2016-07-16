/*
 * Test.cpp
 *
 *  Created on: 21 de mar de 2016
 *      Author: webmaster
 */

#include <Rfid.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	ComunicacaoRecepcao com("/dev/ttyACM0");

	if (com.iniciar() == EXIT_SUCCESS) {
		char ci, cf;
		char uid[9] = {0};

		while (true) {
			int resultado = com.ler((char*) &ci, sizeof(ci));
			if ((resultado == EXIT_SUCCESS) && (ci == 'I')) {
				resultado = com.ler((char*) &uid, (sizeof(uid)-1));
				if (resultado == EXIT_SUCCESS) {
					resultado = com.ler((char*) &cf, sizeof(cf));
					if ((resultado == EXIT_SUCCESS) && (cf == 'F')) {
						cout << "ID = " << uid << endl;
					}
				}
			}
			Sleep(500);
		}
	}
	return EXIT_SUCCESS;
}
