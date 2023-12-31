# RFID Domination Timer for Airsoft
* DEMO firmware (machine .hex) code using which you can test your hardware, if it is compatible for Full application
* Compatible with Arduino Uno, Nano. Visit https://github.com/martinius96/Airsoft-DOMINATOR-RFID/tree/master/Schematics for schematics
* You will see basic output on LCD screen to check if it supports current library
* Via DEMO firmware you can read UID of your RFID card and print them in Serial monitor
* These you can write to on-line template for Teams, Referees or Eraser: https://docs.google.com/spreadsheets/d/1EHpdJi8v84eJ-6ExEPT6JuPkxI9Tfbm8v85zGRFvJ1Q/edit?usp=sharing
* Send me exported .xlsx file to martinius96@gmail.com
* Then I will be able to compile full version for you 

# Firmware upload
* Download firmware: https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/martinius96/Airsoft-DOMINATOR-RFID/blob/master/firmware/RFID_DOMINATOR.hex
* Download XLoader: https://github.com/binaryupdates/xLoader
* Open Xloader, choose firmware .hex file set microcontroller
* Baudrate for normal bootloader 115200 baud/s (Uno), for old bootloader 57600 baud/s (Arduino Nano V3.0)
* Click on Upload and wait
* After firmware is uploaded, Arduino is automatically resetted and it will execute firmware
