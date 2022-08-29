# Instructions - RFID Domination Timer Shareware
[![RFID Domination Timer](https://img.youtube.com/vi/b_2SLzjmOFU/0.jpg)](https://www.youtube.com/watch?v=b_2SLzjmOFU)
* Firmware is compatible with ATmega328P chip with 16 MHz oscillator
* **Firmware will run on Arduino Uno / Arduino Nano or Arduino Pro Mini with ATmega328P**
* Firmware is available in machine code for this microcontroller - .hex file
* **There is implemented Auto-I2C setting for your I2C display, so no need more to use old firmware with static address**
# Upload firmware to your Arduino
* Download XLoader from: https://www.hobbytronics.co.uk/arduino-xloader
* Set path to your firmware
* Set baudrate - 115200 is for Bootloader, 57600 is for "Old Bootloader"
* If you set incorrect baudrate, firmware will not write into microcontroller flash memory
* Set COM port, if you dont see COM port, install CH340 driver (if using Arduino clone)
* Click Upload to write the firmware to the microcontroller
* After uploading the firmware, you will see information about number of bytes written into memory of microcontroller
* After upload, firmware will automatically run (as described in video above)

<p align="center">
  <img src="https://i.imgur.com/N1CHBoL.png" />
</p>

![Domination Timer - machine code upload via XLoader](https://i.imgur.com/jpKuhTc.png)
