/*|-------------------------------------------------|*/
/*|Title: Reading RFID cards UID (unique identifier |*/
/*|Compatible for Arduino Uno / Nano / ATmega328P   |*/
/*|Author: Martin Chlebovec (martinius96@gmail.com) |*/
/*|E-mail: martinius96@gmail.com                    |*/
/*|Revision: 28. July 2022                          |*/
/*|-------------------------------------------------|*/

//Wirte an email to me if you want to purchase full version in .hex machine code

//Template for writing RFID codes for RFID DOMINATION TIMER - Google SpreadSheet: https://docs.google.com/spreadsheets/d/1EHpdJi8v84eJ-6ExEPT6JuPkxI9Tfbm8v85zGRFvJ1Q/edit?usp=sharing

#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class
void setup() {
  Serial.begin(9600);
  Serial.println(F("Reading of RFID cards for RFID Domination Timer"));
  SPI.begin();
  rfid.PCD_Init(); // Init MFRC522
  rfid.PCD_SetAntennaGain(rfid.RxGain_max);
  rfid.PCD_DumpVersionToSerial(); //Write version of Firmware to UART
}

void loop() {
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    dump_byte_array(rfid.uid.uidByte, rfid.uid.size);
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}

void dump_byte_array(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
  }
  Serial.print(F("Detected UID (code) of RFID CARD: "));
  unsigned long code = 10000 * buffer[4] + 1000 * buffer[3] + 100 * buffer[2] + 10 * buffer[1] + buffer[0]; //finalny kod karty
  Serial.println(code);
}
