# Firmware upload
* Download XLoader: https://github.com/binaryupdates/xLoader
* Open Xloader.exe, choose firmware .hex file set microcontroller (ATmega328P chip only)
* Baudrate for standard bootloader 115200 baud/s, for old bootloader 57600 baud/s (Arduino Nano V3.0)
* Click on Upload and wait
* After firmware is uploaded (you will see print XY bytes were uploaded)
* Firmware automatically starts to run, you will see output on the LCD screen
* If it ends with an error, probably bad baudrate was set
* When firmware is running, open Serial monitor and attach RFID card
![Xloader RFID Domination Timer](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/2d9a7d48-d481-4709-8518-fbe1c855f050)
![COM port - Arduino](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/9846c27b-1347-4698-bc73-6e4f8c4c5041)
![Firmware running](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/f6d02023-83dd-4c61-9e4c-ccaf66018bd9)
![Wiring diagram](https://github.com/martinius96/Airsoft-DOMINATOR-RFID/assets/14253034/1091d942-7b9f-4901-9732-278d84dae347)

