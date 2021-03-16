# RFID DOMINATOR - Airsoft / Paintball
* Pri záujme o plnú verziu projektu kontaktujte na: martinius96@gmail.com

**Popis:**
Popis projektu:
DOMINATOR je zariadenie - stopky pre športy typu Airsoft, Paintball. Stopky využívajú riadiaci mikrokontróler Arduino (Arduino Uno / Nano), prípadne samostatný čip (Atmel) AtMega328P, ktorý ovláda celú logiku systému. Súčasťou stopiek je LCD znakový displej rozmeru 16x2 (16 znakov x 2 riadky), respektíve 20x4, na ktorom sa vyobrazujú časy jednotlivých tímov. V hre sú 2 tímy - RED tím a GRE tím, ktoré proti sebe hrajú a zaberajú pomyselný bod, ktorý je tvorený týmto zariadením - DOMINATOR. Na začiatku hry sú na displeji vypísané časy 00 hodín, 00 minút, 00 sekúnd pre RED tím, GRE tím. Každý z členov tímu je vybavený kartou, náramkom, prípadne kľúčenkou, ktorá komunikuje na frekvencii 13.56MHz s RFID čítačkou, ak je v jej dosahu. Kľúčenky a náramky môžu byť farebné odlíšené (zelené, červené podľa tímu a funkcie...), čo umožňuje ich efektívnejšiu distribúciu hráčom, ale aj ich archiváciu a uskladnenie. Ak tím RED obsadí bod, hráč tímu priloží svoju kartu k čítačke, čím bod obsadí. Táto akcia spustí buzzer, ktorý ohlási zmenu na bode. Následne sa rozsvieti LED dióda tímu RED na tomto stanovišti a na displeji sa začne pripočítavať čas pre tento tím. V prípade, že bod obsadí tím GRE a kartu priloží k čítačke člen tohto tímu, opäť sa ozve buzzer, rozsvieti sa dióda tohto tímu, čas tímu RED sa pauzuje a počíta sa čas tímu GRE, ktorý bod obsadil. Ak kartu / kľúčenku priloží organizátor (rozhodca), oba časy sa zapauzujú až do momentu, kým nepriloží kartu niektorý z tímov. Tento typ karty je tak vhodný pre spustenie prestávky, ale môže byť využitá aj pri ukončení hry, kedy je nutné čas zastaviť pre vyhodnotenie hry. V systéme DOMINATOR ešte existuje štvrtý typ karty - eraser, ktorá oba časy zapauzuje a vynuluje na počiatočné hodnoty ako po spustení stopiek DOMINATOR. Slúži pre reštart hry, inicializáciu novej hry. Projekt je vhodný pre Airsoft akcie, športové areály, čí Airsoft tímy, ktoré si môžu dané zariadenie zostrojiť. Výhodou DOMINATOR systému je, že systém je možné klonovať a vytvoriť si X bodov s totožnou konfiguráciou prostredníctvom strojového kódu o ktoré sa v hre môže nezávisle na sebe bojovať, pričom dané RFID karty budú plne fungovať na všetky zariadenia DOMINATOR. Systém je otestovaný, funkčný, ľahko udržiavateľný. Čítačka NXP RC522 pracuje na frekvencii 13.56MHz, RFID tagy registruje na cca 3 centimetre (nutný skoro až fyzický dotyk s čítačkou), kompatibilný formát tagov ISO/IEC 14443-A. Pod danú normu tagov spadajú aj ISIC, autobusové karty, ktoré fungujú ako NFC karty a dokážu oznámiť svoju fyzickú adresu - UID čítačke v dosahu. K projektu existuje DPS návrh GERBER (s vŕtaním a strojovou výrobou DPS), alebo DPS pre výrobu fotocestou. Obe DPS sú obojstranné a s prekovmi. Rozmer 100x105mm. Sú k projektu dodávané GRÁTIS

![Fyzické UID čísla RFID kariet v Excel tabuľke pre použitie v projekte RFID DOMINATOR](https://i.imgur.com/LvXPxVq.png)

**Hardvér použitý pre projekt RFID DOMINATOR:**
* Arduino Uno / Nano (DPS je výhradne navrhnutá pre Arduino Nano)
* RFID RC522
* 2x LED diódy
* 2x predradný rezistor pre LED (možno použiť aj 2x I2C pullup rezistor - použitý v DPS)
* LCD displej 16x2/20x4 s I2C prevodníkom
* Buzzer (hlásič)
* kompatibilné karty a kľúčenky štandardu ISO/IEC 14443-A
# Screenshoty projektu RFID DOMINATOR
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
* K projektu nie je dostupný DPS návrh (neplánuje sa)

# Shareware verzia - Tlačidlový DOMINATOR
**K projektu Tlačidlový DOMINATOR existuje Shareware verzia, kde je možné vyskúšať funkčnosť celého systému s vašim hardvérom.**
* Testovací firmvér je v Shareware verzii obmedzený na maximálne 15 sekundové meranie obsadenia bodu každým tímom
* Verzia využíva 30 sekundovú inicializáciou systému pred jeho možným použitím. 
* Testovací firmvér je v strojovom kóde (.hex)
* Nahrať do Arduino Uno dosky je možné firmvér cez nástroj Xloader (dostupný v repozitári).
* Firmvér je iba pre Arduino Uno / Nano dosku (AtMega328P), pre iné dosky nebude fungovať!
* Pre Arduino Nano s Old Bootloaderom je nutné zvoliť nahrávaciu rýchlosť 57600 baud/s. Pre Uno a Nano s novším Bootloaderom 115200 baud/s.
* Testovací firmvér je založený na schéme zapojenia pre Tlačidlový DOMINATOR bez buzzera (LED diódy fungujú a vizualizujú stav, rovnako displej vypisuje čas)
# Použitie nástroja XLoader pre nahratie strojového kódu do Arduina
![Použitie programu XLoader](https://i.imgur.com/jpKuhTc.png)

**Hardvér použitý pre projekt Tlačidlový DOMINATOR:**
* Arduino Uno / Nano
* 2x LED diódy
* 2x predradný rezistor pre LED (možno použiť aj 2x I2C pullup rezistor)
* LCD displej 16x2/20x4 s I2C prevodníkom
* Buzzer (hlásič)
* 4x spínacie tlačidlá (pushbutton)

# Screenshoty projektu Tlačidlový DOMINATOR
![Tlačidlový DOMINATOR - Arduino - Airsoft - bežiaca hra](https://i.imgur.com/yuHmpZa.jpg)
![Schéma zapojenia - Tlačidlový DOMINATOR - Arduino - Airsoft](https://i.imgur.com/D9KcneX.png)
