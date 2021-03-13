/*|-------------------------------------------------|*/
/*|Názov: Načítanie UID RFID kariet                 |*/
/*|Popis: Načíta prostredníctvom RFID čítačky RC522 |*/
/*|adresu RFID karty, ktorá je priložená a vypíše   |*/
/*|UID na UART rozhranie.                           |*/
/*|Zaznamenané UID kariet sa použijú v DOMINATOR-e  |*/
/*|Autor: Martin Chlebovec                          |*/
/*|E-mail: martinius96@gmail.com                    |*/
/*|Licencia pouzitia: MIT                           |*/
/*|Revízia: 12. Marec 2021                          |*/
/*|-------------------------------------------------|*/

#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class
void setup() {
  Serial.begin(9600);
  while (!Serial);
  SPI.begin();
  rfid.PCD_Init(); // Init MFRC522
  rfid.PCD_SetAntennaGain(112); // set to max (00001110)
  rfid.PCD_DumpVersionToSerial();
}

void loop() {
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    Serial.print(F("Card UID: "));
    dump_byte_array(rfid.uid.uidByte, rfid.uid.size);
    Serial.println();
    Serial.print(F("PICC type: "));
    MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
    Serial.println(rfid.PICC_GetTypeName(piccType));
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }

}

void dump_byte_array(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
  }
  Serial.print("Nacitany kod: ");
  unsigned long kod = 10000 * buffer[4] + 1000 * buffer[3] + 100 * buffer[2] + 10 * buffer[1] + buffer[0]; //finalny kod karty
  Serial.println(kod);
}
