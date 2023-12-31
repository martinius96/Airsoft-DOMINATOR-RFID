# RFID Domination Timer - Airsoft / Paintball
* If you are interested in full version of RFID Domination Timer: martinius96@gmail.com
* Visit available versions, with photogallery: https://martinius96.github.io/Airsoft-DOMINATOR-RFID/
**Description of RFID Domination Timer:**
<p align="justify">
Domination timer (DOMINATOR) is a stopwatch device designed for 2 (or 4 in 2.0 version) teams that play against each other and try to occupy the point and keep it for as long as possible.
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
![IMG_20230723_011918](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/f6bb4645-8ff7-43fc-8630-38718446cdf3)
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
The RFID Dominator system is tuned, it can be put into the game immediately. Firmware uploads within 10 seconds via <a href="[https://www.hobbytronics.co.uk/arduino-xloader](https://github.com/binaryupdates/xLoader)"> XLoader </a>. </b>
</p>

![OSD4](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/394512af-de1e-42cc-aa64-076f4aa261e3)
# Two PCB designs
* RFID Domination Timer comes with two designs for 2 or 4 team firmware support
* Both supports Arduino Nano only!
* 1.0 - 2 teams option in a single game
* 2.0 - 2, 3 or 4 teams option in a single game
![4](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/57f393b2-7760-40be-aa35-f53038750cc9)

**Hardware used for RFID Domination Timer:**
* Arduino Uno / Nano or ATmega328P chip with 16 MHz external oscillator
* NXP RFID RC522 reader
* 2x / 4x LED diodes (V1.0 or V2.0)
* 2x resistors for LED (also there can be used 2x I2C pullup rezistor for LCD display)
* LCD character display 16x2(1.0) or 20x4 (2.0) with I2C converter
* Buzzer
* Compatible cards, keychains, wristbands with standard ISO/IEC 14443-A (13.56 MHz, MiFare 1K)
