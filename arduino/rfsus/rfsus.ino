/*                
* **************************************************************************************** *
*   RF SUS - Uma Soluçao de Atendimento e monitoramento de pacientes para o SUS  *
* **************************************************************************************** *
* ======================================================================================== *
    Autor: Icaro Ramires Costa de Souza 
    Orientador: Luis Paulo
    Organizaçao: IFVBA
* ======================================================================================== *
*/

// LIBRARIES 
#include <SoftwareSerial.h>

// PINS 
#define TX   12   // pin 12
#define RX   13  //  pin 13


SoftwareSerial rfid = SoftwareSerial(TX,RX); 
String id;
char digitoId;


// metodo para setar velocidade de leitura serial
void setupSerial() {
  Serial.begin(9600);
}

// metodo para setar velocidade de leitura card RFID
void setupRFID() {
  rfid.begin(9600);
}

// metodo para realizar a leitura de um id card
void readRFID() {
  while( rfid.available() > 0 ) {
    digitoId = rfid.read();
    id += digitoId;
  }
  if( id.length() > 13) {
    id = id.substring(1,13);
    Serial.println(id);
    id = "";
  }
}

// metodo para enviar o id card via serial
void sendRFID() {
  readRFID();
}

// metodo setup do arduino 
void setup() {
  setupSerial();
  setupRFID();
}

// metodo loop do arduino 
void loop() {
  sendRFID();
  delay(500);
}
