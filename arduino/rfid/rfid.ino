#include <SoftwareSerial.h>
 
// leitor rfid  
SoftwareSerial rfid = SoftwareSerial(12, 13);
String id;
char digitoId;

// configura porta de comunicacao serial
void setupSerial() {
  Serial.begin(9600);
}

// configura o leitor rfid
void setupRFID() {
  rfid.begin(9600);
}
 
// realiza a leitura de um id serial 
void lerRFID()
{
  while(rfid.available()>0)
  {
    digitoId = rfid.read();
    id += digitoId;
  }
  if (id.length() > 9) {
    id = "ID:" + id.substring(1, 9) + ";";
    Serial.print(id);
    id = "";
  }
}

// envia a leitura de sensores
void enviarRFID() 
{
  lerRFID();
}

// inicializa os recursos necessarios da solucao
void setup() {
  setupSerial();
  setupRFID();
}
 
// loop da aplicacao
void loop() {
  enviarRFID();
  delay(500);
}
