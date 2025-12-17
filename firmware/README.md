# Firmware upload
* Download XLoader: https://github.com/binaryupdates/xLoader
* Open Xloader.exe, choose firmware .hex file set microcontroller (ATmega328P chip only)
* Baudrate for standard bootloader 115200 baud/s, for old bootloader 57600 baud/s (Arduino Nano V3.0)
* Click on Upload and wait
* After firmware is uploaded (you will see print XY bytes were uploaded)
* Firmware automatically starts to run, you will see output on the LCD screen with instructions to attach RED, then BLUE, then REFEREE, then ERASER card
* Game starts to run and you can let it count for each team for 15 seconds.
* Once 15 seconds achieved, time will stop for that team
* Its for testing of basic functionality. You can still reset time using ERASER card let it run for 15 seconds again
* If upload process ends with an error, probably bad baudrate was set
* When firmware is running, open Serial monitor and attach RFID card
* Once you see UID of currently attached RFID card, save it into Template: https://docs.google.com/spreadsheets/d/1EHpdJi8v84eJ-6ExEPT6JuPkxI9Tfbm8v85zGRFvJ1Q/edit?usp=sharing
* After all UIDs present in Template, export them and send it to me to get full firmware tailor-made for your RFID cards 
![Xloader RFID Domination Timer](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/2d9a7d48-d481-4709-8518-fbe1c855f050)
![COM port - Arduino](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/9846c27b-1347-4698-bc73-6e4f8c4c5041)
![Wiring diagram](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/1091d942-7b9f-4901-9732-278d84dae347)
<img width="350" height="172" alt="image" src="https://github.com/user-attachments/assets/01bde242-de81-49ad-a785-de62ebb73871" />
