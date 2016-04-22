/*
 * Extern.cpp
 *
 *  Created on: 20 de mar de 2016
 *      Author: webmaster
 */

#include <Extern.h>
#include <ComunicacaoRecepcao.h>

char uid[5] = {0};
char ci, cf;

ComunicacaoRecepcao com = NULL;

int iniciar(char* porta) {
	com = ComunicacaoRecepcao(porta);
	return com.iniciar();
}

int ler() {
	int resultado = com.ler((char*) &ci, sizeof(ci));
	if ((resultado == EXIT_SUCCESS) && (ci == 'I')) {
		resultado = com.ler((char*) &uid, (sizeof(uid)-1));
		if (resultado == EXIT_SUCCESS) {
			resultado = com.ler((char*) &cf, sizeof(cf));
			if((resultado == EXIT_SUCCESS) && (cf == 'F')) {
				return resultado;
			}
		}
	}
	return resultado;
}

char* getUid() {
	return uid;
}
int finalizar() {
	return com.finalizar();
}

