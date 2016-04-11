/*
 * Comunicacao.h
 *
 *  Created on: 20 de mar de 2016
 *      Author: webmaster
 */

#include <stdlib.h>
#ifndef COMUNICACAO_H_
#define COMUNICACAO_H_

#if _WIN32 || _WIN64
#include <windows.h>
#endif

#ifdef __linux__
#include <unistd.h>
#define Sleep(x) usleep(x * 1000);
#endif

class ComunicacaoRecepcao {
private:
	char* porta;

#ifdef __linux__
	int hPorta;
#endif

#if _WIN32 || _WIN64
	HANDLE hPorta;
#endif
public:
	ComunicacaoRecepcao(char* porta);
	int iniciar();
	int ler(char* buffer, long unsigned int bytesParaLer);
	int finalizar();
};

#endif /* COMUNICACAO_H_ */
