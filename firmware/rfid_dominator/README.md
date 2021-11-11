# Instructions - RFID Domination Timer Shareware
[![RFID Domination Timer](https://img.youtube.com/vi/9Vn-rNrTUx4/0.jpg)](https://www.youtube.com/watch?v=9Vn-rNrTUx4)
* Each firmware is compatible with the ATmega328P chip, which is also equipped with Arduino Uno / Nano microcontroller
* Firmware description at: https://martinius96.github.io/Airsoft-DOMINATOR-RFID/en/
* **Firmware is available in version for LCD display with 0x3F or 0x27 I2C address based on its name**
* XLoader tool for uploading firmware to Arduino boards is available at: https://www.hobbytronics.co.uk/arduino-xloader
* **In the program it is necessary to select firmware and change COM port and use suitable baudrate**
* The current port where the microcontroller is logged in can be found in the Device Manager
* The device is most often marked as USB-SERIAL CH340 in the case of clones, or e.g. Arduino Uno in the case of originals
* **Baud rate for New Bootloader: 115200 baud / s, for Old Bootloader: 57600 (some versions of Arduino Nano V3.0)**
* Click Upload to write the firmware to the microcontroller
* After uploading the firmware, information on the number of bytes written to the flash memory is written at the bottom of the XLoader interface
* DOMINATION Timer will automatically run on your Arduino board (maybe first restart will be required via RST button)

<p align="center">
  <img src="https://i.imgur.com/N1CHBoL.png" />
</p>

![Domination Timer - machine code upload via XLoader](https://i.imgur.com/jpKuhTc.png)
