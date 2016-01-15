/*
 * ObservadorSerial.h
 *
 * Observador de leituras atraves da porta
 * serial de computador conectado a algum
 * controlador de sensores (Arduino).
 *
 * Created on: 27/06/2013
 * Author: Luis Paulo
 */
#ifndef OBSERVADORES_H_
#define OBSERVADORES_H_

#include <list>
#include "../serial/SerialComm.h"
#if defined _WIN32 || _WIN64
#include <windows.h>
#endif
#ifdef __linux__
#include <pthread.h>
#endif

// tamanho maximo de informacao serial
#define TAM_SER 12

class NotificacaoSerial {
public:
	virtual ~NotificacaoSerial();
	virtual void notificar(string sensores) = 0;
};

// classe que observa envio de leituras atraves da porta serial (USB) 
class ObservadorSerial {
private:
	// sinalizador de continuidade de leitura
	bool finalizado;
	// leitor rfid
	SerialComm leitor;
	// lista de objetos a serem notificados
	list<NotificacaoSerial *> notificacoes;
	// handle de execucao do observador como processo paralelo
#if defined _WIN32 || _WIN64
    	HANDLE thread;
#endif
#ifdef __linux__
	pthread_t thread;
#endif
public:
	ObservadorSerial(SerialComm leitorSensores);

	// inicia a execucao assincrona do observador
	void iniciar();
	// executa um passo de observacao
	void observar();
	// adiciona um notificado aa lista
	void addNotificacao(NotificacaoSerial *notificacao);
	// finaliza a execucao do observador
	void finalizar();
};

#endif
