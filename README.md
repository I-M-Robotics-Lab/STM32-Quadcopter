# STM32-Quadcopter: Low-cost Quadcopter Design
This is a Quadcopter design based on the STM32F411CEU Blackpill flight controller. Compatible with INAV 6.0 firmware. The flight controller uses MPU9250 for inertia measurement and BMP281 for altitude measurement. It is also capable of an additional GPS and Magnetometer module. 

## Drone Frame


## Electronics


## Flash Firmware

First, download the INAV Configurator v6.0.0 from [this link](https://github.com/iNavFlight/inav-configurator/releases/tag/6.0.0). Once installed, launch INAV Configurator and connect to the Blackpill via USB. Cut the **red wire** in the USB cable to prevent it from powering the Blackpill. Instead, power the flight controller using an external **3S battery**.

![USB](4. Docs/Pictures/USB.jpg)


To enter DFU mode, hold the **BOOT** button on the Blackpill while powering it on. Alternatively, you can press **RESET** while holding the BOOT button. When in DFU mode, the blue LED on the Blackpill will be off, and the board should appear in the INAV Configurator’s drop-down menu as a DFU device. Move to the **Firmware Flasher** tab on the left. Click **Load Firmware**, select the file `inav_6.0.0_GYW_BLACKPILL_F411.hex` (found in the `firmware` folder), then click **Flash Firmware**.

![Screenshot 2025-07-15 at 12.32.55 PM](4. Docs/Pictures/Screenshot 2025-07-15 at 12.32.55 PM.png)

![Screenshot 2025-07-15 at 12.35.22 PM](4. Docs/Pictures/Screenshot 2025-07-15 at 12.35.22 PM.png)

(Insert a picture of the menu after firmware flashed)


## Configuration and Setting Up

