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
          uid.concat(rfid.uid.uidByte[i]);
          uid = uid.substring(1,5);
          
      }   
 
      char buffer[sizeof(uid)] = {0};
      memcpy(&buffer, &uid, sizeof(uid));

      Serial.print('I');
      Serial.print(uid);
      Serial.print('F');  
      uid = "";
  }
  
  delay(500);

}
