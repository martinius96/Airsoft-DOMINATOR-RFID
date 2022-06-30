# RFID Domination Timer - Airsoft / Paintball
* If you are interested in full version of RFID / Button / Configurable Domination Timer: martinius96@gmail.com

**Description of RFID Domination Timer:**
<p align="justify">
Domination timer (DOMINATOR) is a stopwatch device designed for 2 teams that play against each other and try to occupy the point and keep it for as long as possible.
The stopwatch is suitable for Airsoft / Paintball game mode DOMINATION, resp. Capture Hill.
They consist of an ATmega328P microcontroller (AVR), which can be part of the Arduino development kit (Uno / Nano / Pro Mini).
An LCD character display (size 16x2 or 20x4) is used to visualize the times.
The times are listed in two lines below each other and are dynamically updated if there is an active team at the point (a point occupied by a team).
The stopwatch is equipped with indicator LEDs in team colors, which signal the active team at the point and a detector (piezo transducer), which announces the change at the point after attaching the RFID card.
Teams are implemented in the game - <b> <font color = "#C0392B"> RED team </font> </b> and <b> <font color = "#27AE60"> GRE team </font> </b> who play against each other and try to occupy the point and then keep it for as long as possible.
At the beginning of the game, the display shows the times 00 hours, 00 minutes, 00 seconds for <b> <font color = "#C0392B"> RED team </font> </b>, <b> <font color = "#27AE60 "> GRE team </font> </b>.
<b> Each team member is equipped with an RFID chip that is integrated into the bracelet (or card / keychain).
The RFID chip transmits its unique identifier - UID (unique ID), which is read by an RFID reader and verified in the logic of the system to which the entity (team) belongs. </b>
Individual bracelets can be color-coded (red, green by team and entity function), which allows them to be distributed more quickly to players, but also archived and stored by color.
<b> <font color = "#C0392B"> The RED team will occupy the point when the RED team member attaches their card to the RFID reader.
This action triggers a buzzer that announces the change of point with a short beep.
Subsequently, the LED of the RED team at this station will light up and the display will start adding the time for this team until the member's <font color = "#27AE60"> team card is inserted </font>, <font color = "#F39C12"> Referee </font>, or <font color = "#3498DB"> Eraser </font>. </font> </b>
<b> <font color = "#27AE60"> If the point is occupied by a GRE player and the card is attached to an RFID reader, the buzzer will announce this change with a short beep, the GRE LED will light up <font color = "#C0392B"> (RED LED turns off), RED's current time stops </font>, and GRE's time is scored. </font> </b>
</p>
<hr>
<p align="justify">
<b> <font color = "#F39C12"> If the Referee attaches his RFID card, the running time will stop at the current value. The point becomes neutral, the active team's LED goes out.
The stoppage lasts until a member of the <font color = "#C0392B"> RED team </font> or <font color = "#27AE60"> the GRE team </font> presents their card.
This type of card is thus suitable for temporarily stopping an ongoing game, controlling a player's intervention, or injuries.
At the same time, the card can be used at the end of a round of the game, to evaluate the round, respawn teams before continuing. </font> </b>
<b> <font color = "#3498DB"> If Eraser attaches the card, both times will stop and reset to the initial value of 00 hours, 00 minutes, 00 seconds, which will be displayed.
The Eraser card is used to restart the game, to initialize a new game without the need for a power-on cycle. </font> </b>
The RFID reader responds to the insertion of an RFID card immediately, including the entire logic of the Dominator project.
The project is suitable for Airsoft events, sports facilities, or Airsoft teams, which can build a Dominator device with their own hardware.
Firmware is universal, which is based on the wiring diagram, it is also possible to use the available PCB design for the production of printed circuit boards.
<b> The advantage of the RFID Domination timer project is that the usage license authorizes the user to clone and create X points with the same configuration via machine code.
Machine code (.hex) is a compiled firmware format for the RFID Dominator project for supplied UID RFID cards that are embedded in the code before compilation.
It is thus possible to place any number of independently operating RFID Domination timer points in the game, which respond to identical RFID cards according to a uniform configuration.
The RFID Dominator system is tuned, it can be put into the game immediately. Firmware uploads within 10 seconds via <a href="https://www.hobbytronics.co.uk/arduino-xloader"> XLoader </a>. </b>
</p>

**Shareware firmware - RFID Domination Timer:**
* Available at: https://github.com/martinius96/Airsoft-DOMINATOR-RFID/tree/master/firmware/rfid_dominator
* Divided by I2C address 0x27 or 0x3F of LCD display
* It let you to measure up to 15 seconds for each team
* You can use 1 RFID card per entity (4 RFID cards total --> RED, GRE, REFEREE, ERASER)
* LCD display will print order to attach RFID card for entity at startup of program
* Firmware will test compatibility of your hardware, you can test its latency, if output at LCD display is working etc.
* **Firmware is compiled for ATmega328P (Arduino Uno and Nano are compatible)**
* 
![Fyzické UID čísla RFID kariet v Excel tabuľke pre použitie v projekte RFID DOMINATOR](https://i.imgur.com/crCc2Ls.png)

**Hardware used for RFID Domination Timer:**
* Arduino Uno / Nano or ATmega328P chip (Arduino Nano is used at PCB)
* NXP RFID RC522 reader
* 2x LED diodes
* 2x resistors for LED (also there can be used 2x I2C pullup rezistor for LCD display)
* LCD character display 16x2/20x4 with I2C converter
* Buzzer
* Compatible cards, keychains, wristbands with standard ISO/IEC 14443-A (13.56 MHz)
# Screenshots of RFID DOMINATION TIMER
![Device RFID DOMINATION TIMER 1.0](https://i.imgur.com/Rd5pgng.jpeg)
![PCB - RFID DOMINATION TIMER 1.0](https://i.imgur.com/hnNxCyW.png)
![Schéma zapojenia - RFID DOMINATOR - Arduino - Airsoft](https://i.imgur.com/RoHeR7b.png)

# Button Domination Timer
<p align="justify">
Button Domination Timer (DOMINATOR) is a device - stopwatch for sports such as Airsoft, Paintball.
The stopwatch uses an Arduino control microcontroller (Arduino Uno / Nano) or a separate chip (Atmel) ATmega328P, which controls the entire system logic.
The stopwatch includes an LCD character display measuring 16x2 (16 characters x 2 lines), or 20x4, on which the times of individual teams are displayed.
There are 2 teams in the game - <b> <font color = "#C0392B"> RED team </font> </b> and <b> <font color = "#27AE60"> GRE team </font> </b> that play against each other and occupy the imaginary point that is formed by this device - DOMINATOR.
At the beginning of the game, the display shows the times 00 hours, 00 minutes, 00 seconds for <b> <font color = "#C0392B"> RED team </font> </b>, <b> <font color = "#27AE60 "> GRE team </font> </b>.
</p>
<hr>
<p align="justify">
Button Domination Timer uses button input for the action of occupying a point by a team member, as well as for input of a referee and eraser entity.
Thus, a total of 4 buttons for 4 system entities, the switching buttons connected in the INPUT_PULLUP mode are used.
Pressing the button feeds the GND signal to the Arduino digital input terminal (Active-LOW switching signal).
In the basic version, Domination Timer responds immediately to a press - the time counting for a given team is activated (the length of the press, the number of presses, etc. are not verified ...).
The times are displayed on an LCD character display measuring 16x2 or 20x4, which communicates with the control microcontroller via the I2C bus.
<b> <font color = "#C0392B"> If a team member of the RED team occupies a point by pressing a button, a buzzer is triggered, which announces a change in the point with a short beep.
Then the RED team's LED at this station will light up and the display will start adding time for that team. </font> </b>
</p>
<hr>
<p align="justify">
<b> <font color = "#27AE60"> If the point is occupied by the GRE team and a team member presses the appropriate button, the buzzer sounds again, the GRE team LED lights up, the RED team time is paused and the GRE team time is calculated, which point he occupied. </font> </b>
<b> <font color = "#F39C12"> If the organizer (referee) presses his button, both times are paused until a member of one of the teams makes user input.
This type of input is thus suitable for starting a break, but can also end the game for evaluation. </font> </b>
<b> <font color = "#3498DB"> Button Domination Timer has a fourth button for the eraser entity, which pauses and resets both times to initial values as after starting the Button Domination Timer stopwatch.
Used to restart the game, initialize a new game. </font> </b>
The project is suitable for Airsoft events, sports facilities, or Airsoft teams, which can build the equipment.
The advantage of the Button Domination Timer system is that it can be cloned and create X points with the same configuration via machine code, which can be loaded into an unlimited number of Arduino boards and chips and guarantees identical application operation.
Players can thus score more points in the game, while at the end of the game the time is added up as long as which point was occupied by which team.
</p> 

# Shareware version - Button DOMINATOR
**There is a Shareware version for the Button DOMINATOR project, where it is possible to test the functionality of the entire system with your hardware.**
* In the Shareware version, the test firmware is limited to a maximum of 15 seconds of measuring the occupancy of a point by each team
* The version uses 30 seconds to initialize the system before it can be used.
* Test firmware is in machine code (.hex)
* Upload to Arduino Uno boards firmware is possible via Xloader tool (available in repository).
* Firmware is only for Arduino Uno / Nano board (ATmega328P), for other boards it will not work!
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
<p align="justify">
Domination Timer is a device - a stopwatch for sports such as Airsoft, Paintball, which allow you to measure the time of occupying a point with a resolution of seconds.
The stopwatch is equipped with a 16x2 / 20x4 LCD character display. After switching on the device, it is possible to switch between menu items on the display using the rotary encoder - KY-040.
Through the items, it is possible to start the Domination Timer game mode, which responds to user buttons (inputs), or it is possible to set the time of team occupancy before the game in the configurable mode.
This parameter represents the required length of holding the button until the team successfully occupies the point. This configurable parameter is implemented for the number of seconds.
The second configurable parameter is the automatic end of the game to reach a certain number of hours of the stopwatch with the UNLIMITED option - when the stopwatch counts to infinity, or after the maximum display time on the display - 99 hours, 59 minutes, 59 seconds.
Stopwatch is using Arduino microcontroller (with ATmega chip) or a it can use that chip stadalone. Chip controls whole Domination Timer settings, logic of stopwatch etc.
There are 2 teams in the game - <b><font color="#C0392B">RED team</font></b> and <b><font color="#27AE60">GRE team</font></b>, which play against each other and occupy the imaginary point that is formed by this device - Domination Timer.				
At the beginning of the game, the display shows the times 00 hours, 00 minutes, 00 seconds for <b><font color="#C0392B">RED team</font></b>, <b><font color="#27AE60">GRE team</font></b>.
</p>
<hr>
<p align="justify">
Button Domination Timer uses button input for the action of occupying a point by a team member, as well as for input of a referee entity.
Thus, a total of 2 buttons for 3 system entities, the switching buttons connected in the INPUT_PULLUP mode are used.
Pressing the button feeds the GND signal to the Arduino digital input terminal (Active-LOW switching signal).
Switch buttons are used, not switch buttons (they would not react to the system logic, all software would always be "pressed").
The configurable Domination Timer responds to the length of the press, which is set in the configuration menu via an encoder.
It is required to hold the button for a given time. The system does not respond to short presses.
<b> In the extended version, it is also possible to set point neutralization (stopping the time of the active team at the point if a member of the other team holds the button at least 50% of the required time) </b>
The times are displayed on an LCD character display measuring 16x2 or 20x4, which communicates with the control microcontroller via the I2C bus.
<b><font color="#C0392B">If a team member of the RED team occupies a point by pressing a button, a buzzer is launched, which announces a change in the point with a short beep.
Then the RED team's LED at this station will light up and the display will start adding time for that team.</font></b>
</p>
<hr>
<p align="justify">
<b><font color="#27AE60">If the point is occupied by the GRE team and the team member presses the appropriate button, the buzzer sounds again, the GRE team LED lights up, the RED time is paused and the time of the GRE team that occupied the point is counted.</font></b>
<b><font color="#F39C12">The referee must stop both buttons at the same time to stop both times. Times are stopped until the point is reoccupied by some of the teams in the system
This type of input is thus suitable for starting a break, but it can also end the game for its evaluation. In the case of the COUNTDOWN game mode, the combination of both buttons is intended to stop the countdown time!</font></b>
The new game is implemented by resetting the entire Arduino board via the RST button, or by disconnecting and reconnecting the power supply.
In the menu it is also possible to configure the activity / inactivity of the buzzer, which can also be included in the game.
Domination Timer game mode uses a buzzer to announce the current occupation of a point.
Eraser does not exist in this type of Domination Timer.
A second game can be implemented in the system - countdown, which allows you to set a minute countdown while it must be stopped.
The player stops the countdown by holding both buttons for a certain time (based on the configuration menu for the length of pressing from Domination Timer). 
</p>
# Shareware version - Configurable Domination Timer
**There is a Shareware version for Configurable Domination Timer project, where it is possible to test the functionality of the entire system with your hardware.**
* In the Shareware version, the test firmware is limited to a maximum of 15 seconds of measuring the occupancy of a point by each team
* The version uses 30 seconds to initialize the system before it can be used.
* Test firmware is in machine code (.hex)
* Upload to Arduino Uno boards firmware is possible via Xloader tool (available in repository).
* Firmware is only for Arduino Uno / Nano board (ATmega328P), for other boards it will not work!
* For Arduino Nano with Old Bootloader it is necessary to select a recording speed of 57600 baud / s. For Uno and Nano with the newer Bootloader 115200 baud / s.

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
![Configurable Domination Timer - Arduino - Schematics](https://i.imgur.com/jfk1d8y.png)
