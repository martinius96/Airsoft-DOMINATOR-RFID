# RFID Domination Timer for Airsoft
* DEMO firmware (machine .hex) code using which you can test your hardware, if it is compatible for Full application
* Compatible with Arduino Uno, Nano, connect everything based on schematics:
![RFID_DOMINATOR_2 0_Schematics](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/b89e8991-9109-4cb8-963a-dc8c8cafa119)
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
![image](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/2d9a7d48-d481-4709-8518-fbe1c855f050)
![image](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/9846c27b-1347-4698-bc73-6e4f8c4c5041)
![image](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/f6d02023-83dd-4c61-9e4c-ccaf66018bd9)
