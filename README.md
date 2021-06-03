# RFID Domination Timer - Airsoft / Paintball
* If you are interested in full version of RFID Domination timer: martinius96@gmail.com

**Description of RFID Domination Timer:**
>DOMINATOR is a device - stopwatch for sports such as Airsoft, Paintball. The stopwatch uses an Arduino control microcontroller (Arduino Uno / Nano) or a separate chip (Atmel) AtMega328P, which controls the entire system logic. The stopwatch includes an LCD character display measuring 16x2 (16 characters x 2 lines), or 20x4, on which the times of individual teams are displayed. There are 2 teams in the game - RED team and GRE team that play against each other and occupy the imaginary point that is formed by this device - DOMINATOR. At the beginning of the game, the display shows the times 00 hours, 00 minutes, 00 seconds for RED team , GRE team . Each member of the team is equipped with a card, bracelet or key fob, which communicates on the frequency 13.56MHz with an RFID reader, if it is within its range. Keychains and bracelets can be color-coded (green, red according to team and function ...), which allows them to be distributed more efficiently to players, but also their archiving and storage. If the RED team occupies a point, the team player attaches his card to the reader, thus occupying the point. This action triggers a buzzer that announces a change in the point. Then the RED team's LED at this station will light up and the display will start adding time for that team. If a GRE team occupies a point and a member of that team attaches the card to the reader, a buzzer sounds again, that team's LED lights up, RED's team time is paused, and team time counts. GRE, which occupied the point. If the card / key fob is attached by the organizer (referee), both times are paused until one of the teams inserts the card. This type of card is thus suitable for starting a break, but can also be used at the end of the game, when it is necessary to stop time to evaluate the game. There is still a fourth type of card in DOMINATOR - eraser, which pauses both times and resets to initial values as after starting the DOMINATOR stopwatch. Used to restart the game, initialize a new game. The project is suitable for Airsoft events, sports facilities, or Airsoft teams, which can build the equipment. The advantage of the DOMINATOR system is that the system can be cloned and create X points with the same configuration via machine code, which can be fought independently in the game, while the RFID cards will work fully on all DOMINATOR devices. The system is tested, functional, easy to maintain. The NXP RC522 reader works at a frequency of 13.56MHz, registers RFID tags at approx. 3 centimeters (almost physical contact with the reader is required), compatible ISO / IEC 14443-A tag format. The given tag standard also includes ISIC, bus cards, which function as NFC cards and can communicate their physical address - UID to a reader within range. PCB designs

![Fyzické UID čísla RFID kariet v Excel tabuľke pre použitie v projekte RFID DOMINATOR](https://i.imgur.com/crCc2Ls.png)

**Hardware used for Domination Timer:**
* Arduino Uno / Nano or AtMega328P chip (Arduino Nano is used at PCB)
* NXP RFID RC522 reader
* 2x LED diodes
* 2x resistors for LED (also there can be used 2x I2C pullup rezistor for LCD display)
* LCD character display 16x2/20x4 with I2C converter
* Buzzer
* Compatible cards, keychains, wristbands with standard ISO/IEC 14443-A (13.56 MHz)
# Screenshots of RFID DOMINATION TIMER
![Štart Airsoft Hry - RFID Domination Timer - Arduino - Airsoft](https://i.imgur.com/Pv4pbS1.jpeg)
![DPS - GERBER - RFID Domination Timer - Arduino - Airsoft](https://i.imgur.com/tJKTjPF.png)
![Schéma zapojenia - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/RoHeR7b.png)

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
