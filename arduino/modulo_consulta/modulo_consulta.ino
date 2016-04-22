#include <SPI.h>
#include "MFRC522.h"

#define SS_PIN 10   // PINO LEITOR RFID
#define RST_PIN 9   // PINO LEITOR RFID

int potenciomentro = 2;

struct Dados { 
  int temp = 0; // TEMPERATURA
  int bpm = 0; // TEMPERATURA
};

Dados dados;  

MFRC522 rfid(SS_PIN, RST_PIN); // istancia o leitor rfid 

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop(){    
  // DADOS POTENCIOMENTRO    
      int temp = analogRead(potenciomentro);
      int bpm = analogRead(potenciomentro);
      dados.temp = map(temp, 0, 1023, 0,48);
      dados.bpm = map(bpm, 0, 1023, 0, 140);
      
      int tamanho = sizeof(dados);
      char buffer[tamanho];
      memcpy(&buffer, &dados, tamanho);
      // escrevendo na porta serial
      Serial.write('I');
      Serial.write((uint8_t*) &buffer, tamanho);
      Serial.write('F');
      
      // intervalo
      delay(1000);
}
