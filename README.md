# RFID DOMINATOR - Airsoft / Paintball
* Kontakt na autora: martinius96@gmail.com

**Popis:**
* DOMINATOR je zariadenie - stopky, ktoré využívajú RFID vstup
* Využíva riadiaci mikrokontróler (Arduino Uno, Nano, alebo Mega 2560).
* Na znakovom LCD displeji sa vyobrazujú časy jednotlivých tímov (RED a GRE tím.)
* Každý z členov tímu je vybavený kartou, alebo kľúčenkou, ktorá komunikuje na 13.56MHz. Kľúčenky môžu byť farebné odlíšené (modré, červené pre ich ľahšie pridelenie hráčom...)
* Ak tím obsadí bod, hociktorý hráč tohto tímu priloží svoju kartu k čítačke. 
* Rozsvieti sa dióda daného tímu (červená / zelená) na tomto stanovišti a začne sa pripočítavať čas danému tímu. 
* Čas sa počíta až do momentu, kedy bod obsadí druhý tím 
* Ak priloží člen druhého tímu svoju kartu, rozsvieti sa dióda toho daného tímu, čas druhého tímu sa pauzuje a počíta sa čas toho tímu, ktorý bod obsadil. 
* Ak kartu / kľúčenku priloží organizátor (rozhodca), oba časy sa zapauzujú až do momentu, kým nepriloží kartu niektorý z tímov (pauza v hre, koniec hry, vyhodnotenie). 
* Poslednou možnou kartou v systéme je použitie tzv. eraser karty, ktorá oba časy zapauzuje a vynuluje (reštart hry, nová hra).
* Maximálny časový rozsah systému je: 99 hodín 99 minút 59 sekúnd, vhodné teda aj pre akcie a športové areály zaoberajúce sa Airsoftom, Paintballom. 
* Čítačka NXP RC522 pracuje na frekvencii 13.56MHz, RFID tagy registruje na cca 3 centimetre (nutný skoro až fyzický dotyk s čítačkou), kompatibilný formát tagov ISO/IEC 14443 A.
* **Pre projekt je kompatibilná čítačka RC522 s originálnym NXP čipom!** Counterfeit (0x12) čip nie je v systéme podporovaný.

**Hardvér použitý pre projekt:**
* Arduino Uno/Nano/Mega (DPS pre Arduino Nano)
* RFID RC522
* 2x LED diódy
* 2x predradný rezistor pre LED (možno aj 2x I2C pullup rezistor - použitý v DPS)
* LCD displej 16x2/20x4 s I2C prevodníkom
* Buzzer (hlásič)
* kompatibilné karty a kľúčenky štandardu ISO/IEC 14443-A

![Štart Airsoft Hry - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/OY0geF2.jpg)
![DPS - GERBER - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/YMe2Y4L.png)
![DPS - Výroba fotocestou - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/cbZssQT.png)
![Schéma zapojenia - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/g5ufkBO.png)

# Tlačidlový DOMINATOR - Airsoft / Paintball
* Logikou totožný ako RFID DOMINATOR, využíva však tlačidlový vstup spínacími tlačidlami
* Hráč tímu po obsadení bodu stlačí príslušné tlačidlo, čím obsadí bod (reakcia na stlačenie je okamžitá). 
* Hlásič (buzzer) pípnutím oznámi obsadenie bodu, rozsvieti sa LED dióda daného tímu, začne sa počítať čas.
* Čas sa pre tento tím počíta do momentu, kým bod neobsadí a neaktivuje svoje tlačidlo člen druhého tímu, čo zastaví pôvodný čas a začne sa pripočítavať čas k druhému tímu.
* Rozhodca má svoje tlačidlo, ktorým dokáže čas zastaviť - vykonať pauzu. Pauza hry, obed, koniec hry, spočítanie času a vyhodnotenie herného kola.
* Posledným tlačidlom v systéme je možnosť erasera, ktorý čas zastaví a vynuluje (reštart hry, nová hra). 
* LED diódy je možné nahradiť za relé pre možnosť spínať výkonnejšie svietidlá pre lepšiu viditeľnosť aktuálnej farby DOMINATOR-a

# Shareware verzia - Tlačidlový DOMINATOR
**K projektu Tlačidlový DOMINATOR existuje Shareware verzia, kde je možné vyskúšať funkčnosť celého systému s vašim hardvérom.**
* Testovací firmvér je v Shareware verzii obmedzený na maximálne 15 sekundové meranie obsadenia bodu každým tímom
* Verzia využíva 30 sekundovú inicializáciou systému pred jeho možným použitím. 
* Testovací firmvér je v strojovom kóde (.hex)
* Nahrať do Arduino Uno dosky je možné firmvér cez nástroj Xloader (dostupný v repozitári).
* Firmvér je iba per Arduino Uno dosku, pre iné dosky nebude fungovať!
* Testovací firmvér je založený na schéme zapojenia pre Tlačidlový DOMINATOR bez buzzera (LED diódy fungujú a vizualizujú stav, rovnako displej vypisuje čas)
