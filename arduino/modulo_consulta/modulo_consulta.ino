/*
*
*    Author: Icaro Ramires Costa de Souza
*    Date: 2016-05-10
*    Sensor GY-906 (MXL90614) 
*    -> Connect <-
*    Vcc(Vin) = +3.3V, SDA = A4, SCL = A5, GND = GND(ARDUINO)
*/

#include <Wire.h>
#include "MLX90614.h"


esl:: MLX90614 termometro; // instancia do sensor de temperatura 
int potenciomentroPin = 2; // simula a pressao sistolica
int batimentosSensorPin = 0; // seta a porta de leitura do sensor como Analogic 0
double alpha = 0.75; // isto  e uma forma de tirar uma media dos batimento ele pega 75 dos anteriores + 25 do atual
int periodo = 20; // tempo de atraso na leitura dos sensores 

struct Dados { 
  int temp = 0; // TEMPERATURA
  int bpm = 0; // BATIMENTOS
  int precaoS = 0; // PRESSAO SISTOLICA mmHg
  int precaoD = 0; // PRESSAO DIASTOLICA mmHg
};

Dados dados; // conjunto de dados do sensores  

void setup() {
  Serial.begin(115200);
  while(!Serial); // expecifico para o arduino leonardo ou arduino Pro Micro
  Wire.begin();
  termometro.init();
}


int getTemperatura() {
  int temperatura = 0; 
  if ( !termometro.is_crc_error() ) {
    temperatura = termometro.readObjectTemperature();
  } 
  return temperatura;
 }


int getBpm() {
  static int valorAnterior = 0; // usado para realizar o calculo
  int valorBruto = analogRead(batimentosSensorPin);
  int bpm = alpha * valorAnterior + (1 - alpha) * valorBruto;
  valorAnterior = bpm;
  return bpm;  
}

void loop(){    
    
      int temp = getTemperatura();
      long bpm = getBpm()/10;
      
      int precaoS = analogRead(potenciomentroPin);
      int precaoD = analogRead(potenciomentroPin);
      
      dados.temp = temp;
      dados.bpm = bpm;
      dados.precaoS = map(precaoS,0, 1023, 0, 300);
      dados.precaoD = map(precaoD, 0, 1023, 0, 100);
 
      int tamanho = sizeof(dados);
      char buffer[tamanho];
      memcpy(&buffer, &dados, tamanho);
      
      // escrevendo na porta serial
      Serial.write('I');
      Serial.write((uint8_t*) &buffer, tamanho);
      Serial.write('F');
      
      // intervalo
      delay(periodo);
}
