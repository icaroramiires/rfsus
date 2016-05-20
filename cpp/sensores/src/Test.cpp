/*
 * Test.cpp
 *
 *  Created on: 21 de mar de 2016
 *      Author: webmaster
 */

#include <Sensores.h>
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

struct Dados {
	short temp;		 	//  2 bytes
	short bpm;			// 	2 bytes
	short pressaoS; 	//	2 bytes
	short pressaoD;		//	2 bytes
};


int main(int argc, char **argv) {
	ComunicacaoConsulta com = ComunicacaoConsulta("/dev/ttyUSB0");
	if (com.iniciar() == EXIT_SUCCESS) {
		char ci, cf;
		Dados dadosp;
		cout << sizeof(dadosp);
		while (true) {
			int resultado = com.ler((char*) &ci, sizeof(ci));

			if((resultado == EXIT_SUCCESS) && (ci == 'I')) {
				resultado = com.ler((char*) &dadosp, sizeof(dadosp));

				if((resultado == EXIT_SUCCESS)){
					resultado = com.ler((char*) &cf, sizeof(cf));

					if((resultado == EXIT_SUCCESS) && (cf == 'F')) {
						cout << "temp: " << dadosp.temp << endl;
						cout << "bpm: " << dadosp.bpm << endl;
						cout << "Pressão S" << dadosp.pressaoS << endl;
						cout << "Pressão D" << dadosp.pressaoD << endl;
					}
				}
			}
			Sleep(500);
		}
	}
	return EXIT_SUCCESS;
}
