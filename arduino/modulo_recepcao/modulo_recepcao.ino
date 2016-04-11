#include <SPI.h>
#include "MFRC522.h"

#define SS_PIN 10   // PINO LEITOR RFID
#define RST_PIN 9   // PINO LEITOR RFID

MFRC522 rfid(SS_PIN, RST_PIN);



String uid = ""; // ARMAZENA VALOR DA TAG RFID

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop(){

  if( rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial() ) {
       
      for(byte i = 0; i < rfid.uid.size; i++) {
          conteudo.concat(rfid.uid.uidByte[i]);
          conteudo = conteudo.substring(1,5);
          
      }   
 
      char buffer[sizeof(conteudo)] = {0};
      memcpy(&buffer, &conteudo, sizeof(conteudo));

      Serial.print('I');
      Serial.print(conteudo);
      Serial.print('F');  
      conteudo = "";
  }
  
  delay(500);

}
