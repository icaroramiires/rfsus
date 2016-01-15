/*
 * notificadorRFID.h
 *
 *  Created on: 02/09/2015
 *      Author: andre
 */

#ifndef NOTIFICADORRFID_H_
#define NOTIFICADORRFID_H_

class NotificacaoRFID : public NotificacaoSerial{
public:
	 ~NotificacaoRFID();
	 void notificar(string sensores);
};

#endif /* NOTIFICADORRFID_H_ */
