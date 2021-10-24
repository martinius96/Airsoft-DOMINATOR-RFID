# RFID Domination Timer - Airsoft / Paintball
* If you are interested in full version of RFID / Button / Configurable Domination Timer: martinius96@gmail.com

**Description of RFID Domination Timer:**
<p style="text-align: justify;">
Domination Timer is a device (stopwatch) for Airsoft sports, Paintball with an Arduino microcontroller (Uno / Nano) with an AtMega328P AVR chip.
The stopwatch includes an LCD character display measuring 16x2 (16 characters x 2 lines), or 20x4, on which the times of individual teams are displayed.
There are 2 teams in the game - <b> <font color = "#C0392B"> RED team </font> </b> and <b> <font color = "#27AE60"> GRE team </font> </b > that play against each other and occupy the imaginary point that is formed by this device - Domination Timer.
At the beginning of the game, the display shows the times 00 hours, 00 minutes, 00 seconds for <b> <font color = "#C0392B"> RED team </font> </b>, <b> <font color = "#27AE60 "> GRE team </font> </b>.
Each member of the team is equipped with a card, bracelet or key fob, which communicates on the frequency 13.56MHz with an RFID reader, if it is within range.
Keychains and bracelets can be color-coded (green, red according to team and function ...), which allows them to be distributed more efficiently to players, but also their archiving and storage.
<b> <font color = "#C0392B"> If the RED team occupies a point, the team player attaches his card to the reader, thus occupying the point. This action triggers a buzzer that announces a change in the point.
Then the RED team's LED at this station will light up and the display will start adding time for that team. </font> </b>
</p>
<hr>
<p style="text-align: justify;">
<b> <font color = "#27AE60"> If a GRE team occupies a point and a member of that team attaches the card to the reader, a buzzer sounds again, that team's LED lights up, RED's team time is paused, and team time counts. GRE, which occupied the point. </font> </b>
<b> <font color = "#F39C12"> If the card / key fob is attached by the organizer (referee), both times are paused until one of the teams inserts the card.
This type of card is thus suitable for starting a break, but can also be used at the end of the game, when it is necessary to stop time to evaluate the game. </font> </b>
<b> <font color = "#3498DB"> If the card is attached by Eraser, both times are stopped and reset to the initial value of 00 hours, 00 minutes, 00 seconds at the same time.
Used to restart the game, initialize a new game. </font> </b>
Project RFID Domination Timer for Airsoft is suitable for  events, facilities (arenas), or Airsoft teams.
<b>Huge advantage of the Domination Timer system is that the system can be cloned using same firmware for multiple RFID Domination Timers, so you can create as many Timers as you want that will react to same cards.</b>
The NXP RC522 reader works at a frequency of 13.56MHz, registers RFID tags at approx. 3 centimeters (almost physical contact with the reader is required), compatible ISO / IEC 14443-A tag format.
The given tag standard also includes ISIC, bus cards, which function as NFC cards and can communicate their physical address - UID to a reader within range.
</p>

**ShareWare firmware - RFID Domination Timer:**
* Available at: https://github.com/martinius96/Airsoft-DOMINATOR-RFID/tree/master/firmware/rfid_dominator
* Divided by I2C address 0x27 or 0x3F of LCD display
* It let you to measure up to 15 seconds for each team
* You can use 1 RFID card per entity (4 total --> RED, GRE, REFEREE, ERASER)
* Firmware will test compatibility of your hardware, you can test its latency, if output at LCD display is working etc.
* **Firmware is compiled for ATmega328P (Arduino Uno and Nano are compatible)**
* 
![Fyzické UID čísla RFID kariet v Excel tabuľke pre použitie v projekte RFID DOMINATOR](https://i.imgur.com/crCc2Ls.png)

**Hardware used for RFID Domination Timer:**
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

# Button DOMINATOR - Airsoft / Paintball
* Logically identical to RFID DOMINATOR, but uses button input with switching buttons
* After occupying a point, the team player presses the appropriate button to occupy the point (the response to the press is immediate).
* The buzzer beeps to indicate the occupation of the point, the LED of the team lights up, the time starts to count.
* The time is counted for this team until the point is occupied and activated by a member of the other team, which stops the original time and starts adding time to the other team.
* The referee has his own button with which he can stop time - take a break. Pause the game, lunch, end of the game, counting time and evaluating the game round.
* The last button in the system is the eraser option, which stops and resets the time (game restart, new game).
* LEDs can be replaced by relays for the ability to switch more powerful lamps for better visibility of the current color DOMINATOR-a
* No PCB proposal available for the project (not planned)

# Shareware version - Button DOMINATOR
** There is a Shareware version for the Button DOMINATOR project, where it is possible to test the functionality of the entire system with your hardware. **
* In the Shareware version, the test firmware is limited to a maximum of 15 seconds of measuring the occupancy of a point by each team
* The version uses 30 seconds to initialize the system before it can be used.
* Test firmware is in machine code (.hex)
* Upload to Arduino Uno boards firmware is possible via Xloader tool (available in repository).
* Firmware is only for Arduino Uno / Nano board (AtMega328P), for other boards it will not work!
* For Arduino Nano with Old Bootloader it is necessary to select a recording speed of 57600 baud / s. For Uno and Nano with the newer Bootloader 115200 baud / s.
* The test firmware is based on the wiring diagram for the Button DOMINATOR without a buzzer (LEDs work and visualize the status, the display also shows the time)
# Use XLoader to upload machine code to Arduino
![Použitie programu XLoader](https://i.imgur.com/jpKuhTc.png)

**Hardware used for the Button DOMINATOR project:**
* Arduino Uno / Nano
* 2x LEDs
* 2x ballast resistor for LED (2x I2C pullup resistor can also be used)
* LCD display 16x2 / 20x4 with I2C converter
* Buzzer
* 4x pushbuttons

# Screenshots of the Button DOMINATION Timer
![Tlačidlový DOMINATOR - Arduino - Airsoft - bežiaca hra](https://i.imgur.com/yuHmpZa.jpg)
![Schéma zapojenia - Tlačidlový DOMINATOR - Arduino - Airsoft](https://i.imgur.com/D9KcneX.png)
