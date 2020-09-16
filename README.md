# Airsoft-DOMINATOR-RFID
* Kontakt na autora: martinius96@gmail.com

**Popis:**
* DOMINATOR je zariadenie - stopky, ktoré využívajú RFID vstup
* Využíva riadiaci mikrokontróler (Arduino Uno, Nano, alebo Mega 2560).
* Na znakovom LCD displeji sa vyobrazujú časy jednotlivých tímov (RF a GDP tím.)
* Každý z členov tímu je vybavený kartou, alebo kľúčenkou, ktorá komunikuje na 13.56MHz. Kľúčenky môžu byť farebné odlíšené (modré, červené...)
* Ak tím obsadí bod, hociktorý hráč tohto tímu priloží svoju kartu k čítačke. Rozsvieti sa dióda daného tímu (červená / modrá) na tomto stanovišti a začne sa pripočítavať čas danému tímu. 
* Ak bod obsadí druhý tím a priloží člen tohto tímu svoju kartu, rozsvieti sa dióda toho tímu, čas druhého tímu sa pauzuje a počíta sa čas toho tímu, ktorý bod obsadil. 
* Ak kartu / kľúčenku priloží organizátor (rozhodca), oba časy sa zapauzujú až do momentu, kým nepriloží kartu niektorý z tímov. Poslednou možnou kartou v systéme je použitie tzv. eraser karty, ktorá oba časy zapauzuje a vynuluje.
* Maximálny časový rozsah systému je: 99 hodín 99 minút 59 sekúnd, vhodné teda aj pre akcie a športové areály. 
* Čítačka RC522 pracuje na frekvencii 13.56MHz, RFID tagy registruje na cca 3 centimetre (nutný skoro až fyzický dotyk s čítačkou), kompatibilný formát tagov ISO/IEC 14443 A.

**Hardvér použitý pre projekt:**
* Arduino Uno/Nano/Mega
* RFID RC522
* 2x LED
* LCD displej 16x2/20x4 s I2C prevodníkom
* kompatibilné karty a kľúčenky štandardu ISO/IEC 14443 A

![Štart Airsoft Hry - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/OY0geF2.jpg)
![DPS - GERBER - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/YMe2Y4L.png)
![DPS - Výroba fotocestou - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/YMe2Y4L.png)
![Schéma zapojenia - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/g5ufkBO.png)
