/*
 * Extern.h
 *
 *  Created on: 20 de mar de 2016
 *      Author: webmaster
 */

#ifndef EXTERN_H_
#define EXTERN_H_

#ifdef __cplusplus
extern "C" {
#endif

int iniciar(char* porta);
int ler();
char* getUid();
int finalizar();
#ifdef __cplusplus
}
#endif




#endif /* EXTERN_H_ */
