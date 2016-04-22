/*
 * Extern.cpp
 *
 *  Created on: 20 de mar de 2016
 *      Author: webmaster
 */

#include <Extern.h>
#include <Sensores.h>

struct Dados {
	short temp;
	short bmp;
} dados;

char ci, cf;

ComunicacaoConsulta com = NULL;

int iniciar(char* porta) {
	com = ComunicacaoConsulta(porta);
	return com.iniciar();
}

int ler() {
	int resultado = com.ler((char*) &ci, sizeof(ci));
	if ((resultado == EXIT_SUCCESS) && (ci == 'I')) {
		resultado = com.ler((char*) &dados, sizeof(dados));
		if (resultado == EXIT_SUCCESS) {
			resultado = com.ler((char*) &cf, sizeof(cf));
			if((resultado == EXIT_SUCCESS) && (cf == 'F')) {
				return resultado;
			}
		}
	}
	return resultado;
}

int getTemp() {
	return dados.temp;
}

int getBpm() {
	return dados.bmp;
}

int finalizar() {
	return com.finalizar();
}
