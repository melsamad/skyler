# skyler
An Ai Tutor Lamp to help with your homework instead of pulling out your phone

## Inspiration 

I finished school (yay) and looking back I realized that after finishing my homework (especially anything math related) or when I stumble upon hard problems I can't solve until the end, I have a tendency of grabbing my phone, taking a picture of the homework and asking some sort of Ai to help out or correct my work.

I think this is a good use of Ai, but here's the catch: I end up doom scrolling on my phone. So instead of having to go through all this and losing my focus, I thought to myself: why not build an Ai tutor lamp with a built-in camera that can just move around, snap a picture of my homework, and talk to me about it?

When I was envisionning it I thought I could connect Gemini to it (I've used the Gemini API so many times before) or Gemma, Google's local Ai. I also want to make it into an app: without having to do anything, the user's conversations and images are kept within an app to look back on progress or notice places where he often struggles.

So, after understanding what I want this lamp to do and** how I want it to move and interact**, I set out to look for inspiration on how I want this "lamp" to look like, and I found this sort of vintage, old tech looking one. I imagined it moving, and instead of lamps a screen that makes cute faces and talks to you, with a built-in camera on top, and so I used it for inspiration for my 3D model.

NOTE: because this project is intended to be a prototype to see if such tech could actually be useful and interact properly, it's gonna be very ugly. I don't have a 3D printer (yet) so I'm relying a lot on my arts and crafts skills to envision this.

This project is intended to be a prototype for a project I plan to expand and develop. Here, I am attempting to get a working, useful lamp in a short amount of time with a couple of new items and some that I already have. Thus, I have 3D Modeled an idea for what the finished lamp should look like and I have made a simple schematic describing the wiring of all components. 

## Components 

- ESP32
- ESP32-CAM
- Touch LCD Screen
- LCD Screen
- Nema 17 Stepper Motor
- A4988 Stepper Motor Driver
- High Torque Servo Motor
- LM386 Audio Amplifier Module
- Speaker
- MB102 Breadboard Power Supply Module
- Li-ion Rechargeable Battery
- 2 X Lithium Battery Holder
- On/Off Button

## 3D Model
<img width="869" height="773" alt="Screenshot 2026-06-16 at 2 25 22 AM" src="https://github.com/user-attachments/assets/4bd6b224-931f-4f30-b14e-12d8299b94b8" />

You can find the full 3D model here: https://cad.onshape.com/documents/8ec79e7975b6744942bbf4ec/w/496116313dd6149625ee8f80/e/039a2d50b10243778eb29437?renderMode=0&uiState=6a308a2112c1bea27ce2611d

## Schematic (Wiring Diagram)

<img width="2134" height="1522" alt="2850A0FF-4C0F-43FE-947C-E0EE290DE404" src="https://github.com/user-attachments/assets/deb5eb7d-b8a9-41bc-a772-1de2005ad7eb" />

## BOM (Bill Of Materials)

| Component | Designator | Quantity | Link | 
| :--- | :--- | :---| :--- | 
| Microcontroller | ESP32 | 1 | https://electroslab.com/products/esp32?_pos=1&_sid=03f648e2b&_ss=r |
| Camera Module | OVOV2640 | 1 | https://electroslab.com/products/esp32-cam?_pos=1&_sid=856a23195&_ss=r |
| Main Screen Display | Waveshare 3.2inch Touch LCD Screen | 1 | https://electroslab.com/products/waveshare-3-2inch-tft-lcd-screen | 
| Bottom Screen Display | LCD1602 LCD 1602 IIC/I2C Blue Backlight | 1 | https://electroslab.com/products/lcd1602-iic-i2c-blue-backlight | 
| Stepper Motor | 17HS8401S-D150S Nema 17 Stepper Motor | 1 | https://electroslab.com/products/17hs8401s-d150s-nema-17-stepper-motor-1-8a-52n-cm?_pos=1&_sid=a7ba3be5b&_ss=r | 
| Stepper Motor Driver | A4988 Stepper Motor Driver | 1 | https://electroslab.com/products/a4988-stepper-motor-driver?_pos=3&_sid=df0f3eddf&_ss=r | 
| Servo Motor | High Torque Servo Motor DS-S020A-C | 2 | https://electroslab.com/products/high-torque-servo-motor-ds-s020a-c?_pos=8&_sid=93834f66d&_ss=r | 
| Audio Power Amplifier Module | LM386 Audio Power Amplifier Module | 1 | https://electroslab.com/products/lm386-audio-power-amplifier-module?_pos=2&_sid=411d3b9ac&_ss=r | 
| Speaker Module | Speaker Module | 1 | https://electroslab.com/products/speaker-8-ohm-0-5-watt | 
| Breadboard Power Supply Module | MB102 Breadboard Power Supply Module 3.3V 5V | 1 | https://electroslab.com/products/mb102-breadboard-power-supply-module-3-3v-5v?_pos=1&_sid=f577cafb8&_ss=r |
| Battery | Li-ion Rechargeable Battery 18650 - 3.7v 2000 mAh | 2 | https://electroslab.com/products/li-ion-rechargeable-solder-battery-18650-3-7v-2800-mah | 
| Battery Holder | 2 X Lithium Battery Holder Box (LIR-18650 3.7V) | 1 | https://electroslab.com/products/2-x-aa-lithium-battery-charger | 

