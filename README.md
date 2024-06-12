# Arduino Security System
A security system that uses a variety of sensors to detect if a person is near, sound an alarm, send a message through the LCD, and light up the LEDS.

![alt text](https://github.com/AidenSorabji/Arduino-Security-System/blob/main/Arduino_Schematic.png)

## Features
- Fully Working LiquidCrystal LCD
- Motion Detection
- Sound Output
  
## How To Make 

#### Required Parts
- 1x | Liquid Crystal LCD
- 2x | LEDs
- 4x | 22Ω Resisters
- 48x<sup>1</sup> | Wires
- 1x | UltraSonic Sensor
- 1x | Potentiometer 500Ω
- 1x | Piezo Speaker
- 2x | Bread Board
- 1x | Arduino<sup>2</sup>

#### Building
While there is no specific way to build it (just follow the diagram, it's accurate and easy to understand), its easier to start with building everything on the bread board, then adding the wires to the Arduino, then adding the ultrasonic sensor to everything.

#### Code
Download the Code from the repo or in the [Releases](https://github.com/AidenSorabji/Arduino-Security-System/releases) tab, open it in [Arduino IDE](https://www.arduino.cc/en/software), plug-in and select your Arduino, click serial monitor, and watch it run. If it doesn't run or doesn't run right, then check your connections; check if you placed something wrong; and if all goes wrong, check the code and tailor it to what you need, its fully commented so you'll know what each part means.

## License 
Copyright (c) 2024 Aiden Sorabji

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

<br></br>
**<sup>1</sup>** Estimate Number, you'll probably need more or less <br></br>
**<sup>2</sup>** You can use any Arduino, I used an Arduino Uno Wifi Rev2
