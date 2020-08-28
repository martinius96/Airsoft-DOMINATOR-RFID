//PROGRAM PRE NACITANIE UID RFID KARIET PRE DALSIE POUZITIE V DOMINATOR-e
//PRE PROJEKT RFID DOMINATOR (Airsoft, Paintball, Nerf Wars)
//Autor: Martin Chlebovec
//TOTO NIE JE PROGRAM PRE DOMINATOR!

#include <SPI.h>
#include <MFRC522.h>
#define RST_PIN         9
#define SS_1_PIN        10
#define NR_OF_READERS   1
byte ssPins[] = {SS_1_PIN};
MFRC522 mfrc522[NR_OF_READERS];
void setup() {
  Serial.begin(9600);
  while (!Serial);
  SPI.begin();
  for (uint8_t reader = 0; reader < NR_OF_READERS; reader++) {
    mfrc522[reader].PCD_Init(ssPins[reader], RST_PIN);
    mfrc522[reader].PCD_SetAntennaGain(112); // set to max (00001110)
    Serial.print(F("Reader "));
    Serial.print(reader);
    Serial.print(F(": "));
    mfrc522[reader].PCD_DumpVersionToSerial();
  }
}

void loop() {
  for (uint8_t reader = 0; reader < NR_OF_READERS; reader++) {
    if (mfrc522[reader].PICC_IsNewCardPresent() && mfrc522[reader].PICC_ReadCardSerial()) {
      Serial.print(F("Reader "));
      Serial.print(reader);
      Serial.print(F(": Card UID:"));
      dump_byte_array(mfrc522[reader].uid.uidByte, mfrc522[reader].uid.size);
      Serial.println();
      Serial.print(F("PICC type: "));
      MFRC522::PICC_Type piccType = mfrc522[reader].PICC_GetType(mfrc522[reader].uid.sak);
      Serial.println(mfrc522[reader].PICC_GetTypeName(piccType));
      mfrc522[reader].PICC_HaltA();
      mfrc522[reader].PCD_StopCrypto1();
    }
  }
}

void dump_byte_array(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
  }
  Serial.print("Kod:");
  unsigned long kod = 10000 * buffer[4] + 1000 * buffer[3] + 100 * buffer[2] + 10 * buffer[1] + buffer[0]; //finalny kod karty
  Serial.print(kod);
}
