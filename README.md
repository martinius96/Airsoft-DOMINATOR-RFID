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

# Button Domination Timer
<p style="text-align: justify;">
Button Domination Timer uses button input for the action of occupying a point by a team member, as well as for input of a referee and eraser entity. Thus, a total of 4 buttons for 4 system entities, the switching buttons connected in the INPUT_PULLUP mode are used. Pressing the button feeds the GND signal to the Arduino digital input terminal (Active-LOW switching signal). In the basic version, Domination Timer responds immediately to a press - the time counting for a given team is activated (the length of the press, the number of presses, etc. are not verified ...). The times are displayed on an LCD character display measuring 16x2 or 20x4, which communicates with the control microcontroller via the I2C bus. If a team member of the RED team occupies a point by pressing a button, a buzzer is triggered, which announces a change in the point with a short beep. Then the RED team's LED at this station will light up and the display will start adding time for that team.
</p>
<hr>
<p style="text-align: justify;"> 
If the point is occupied by the GRE team and a team member presses the appropriate button, the buzzer sounds again, the GRE team LED lights up, the RED team time is paused and the GRE team time is calculated, which point he occupied. If the organizer (referee) presses his button, both times are paused until a member of one of the teams makes user input. This type of input is thus suitable for starting a break, but can also end the game for evaluation. Button Domination Timer has a fourth button for the eraser entity, which pauses and resets both times to initial values as after starting the Button Domination Timer stopwatch. Used to restart the game, initialize a new game. The project is suitable for Airsoft events, sports facilities, or Airsoft teams, which can build the equipment. The advantage of the Button Domination Timer system is that it can be cloned and create X points with the same configuration via machine code, which can be loaded into an unlimited number of Arduino boards and chips and guarantees identical application operation. Players can thus score more points in the game, while at the end of the game the time is added up as long as which point was occupied by which team.
</p>

# Shareware version - Button DOMINATOR
**There is a Shareware version for the Button DOMINATOR project, where it is possible to test the functionality of the entire system with your hardware.**
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

# Configurable Domination Timer
<p style="text-align: justify;">
Button Domination Timer uses button input for the action of occupying a point by a team member, as well as for input of a referee entity. Thus, a total of 2 buttons for 3 system entities, the switching buttons connected in the INPUT_PULLUP mode are used. Pressing the button feeds the GND signal to the Arduino digital input terminal (Active-LOW switching signal). Switch buttons are used, not switch buttons (they would not react to the system logic, all software would always be "pressed"). The configurable Domination Timer responds to the length of the press, which is set in the configuration menu via an encoder. It is required to hold the button for a given time. The system does not respond to short presses. In the extended version, it is also possible to set point neutralization (stopping the time of the active team at the point if a member of the other team holds the button at least 50% of the required time) The times are displayed on an LCD character display measuring 16x2 or 20x4, which communicates with the control microcontroller via the I2C bus. If a team member of the RED team occupies a point by pressing a button, a buzzer is launched, which announces a change in the point with a short beep. Then the RED team's LED at this station will light up and the display will start adding time for that team.
</p>
<hr>
<p style="text-align: justify;"> 
paused and the time of the GRE team that occupied the point is counted. The referee must stop both buttons at the same time to stop both times. Times are stopped until the point is reoccupied by some of the teams in the system This type of input is thus suitable for starting a break, but it can also end the game for its evaluation. In the case of the COUNTDOWN game mode, the combination of both buttons is intended to stop the countdown time! The new game is implemented by resetting the entire Arduino board via the RST button, or by disconnecting and reconnecting the power supply. In the menu it is also possible to configure the activity / inactivity of the buzzer, which can also be included in the game. Domination Timer game mode uses a buzzer to announce the current occupation of a point. Eraser does not exist in this type of Domination Timer. A second game can be implemented in the system - countdown, which allows you to set a minute countdown while it must be stopped. The player stops the countdown by holding both buttons for a certain time (based on the configuration menu for the length of pressing from Domination Timer).
</p>
**Hardware used for the Configurable Domination Timer project:**
* Arduino Uno / Nano
* 2x LEDs
* 2x ballast resistor for LED (2x I2C pullup resistor can also be used)
* LCD display 16x2 / 20x4 with I2C converter
* Buzzer
* 2x pushbuttons
* Rotary encoder KY-040

# Screenshots of Configurable Domination Timer
![Configurable Domination Timer - Arduino - Airsoft - running game](https://i.imgur.com/R0wwJjD.jpeg)
