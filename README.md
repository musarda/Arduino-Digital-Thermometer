<div align="center">
  <h1>Arduino Digital Thermometer</h1>
</div>
<div style="text-align: center;" align="center">
  <a href="https://www.github.com/musarda">
    <img src="https://img.shields.io/badge/-GitHub-000?style=quare&labelColor=000&logo=GitHub&logoColor=white&link=link" alt="Github Badge">
  </a>
  <a href="https://www.youtube.com/@CodeChain">
    <img src="https://img.shields.io/badge/-YouTube-c4302b?style=quare&labelColor=c4302b&logo=YouTube&logoColor=white&link=link" alt="YouTube Badge">
  </a>
  <a href="https://discord.gg/kf29ZKZyw6">
    <img src="https://img.shields.io/badge/-Discord-738adb?style=quare&labelColor=blurple&logo=Discord&logoColor=white&link=link" alt="Discord Badge">
  </a>
  <a href="https://www.glitch.com/@musarda44">
    <img src="https://img.shields.io/badge/-Glitch-2800ff?style=quare&labelColor=2800ff&logo=Glitch&logoColor=white&link=link" alt="Glitch Badge">
  </a>
  <a href="https://discord.gg/Kaye7tpHcQ">
    <img src="https://img.shields.io/badge/-Discord-738adb?style=quare&labelColor=blurple&logo=Discord&logoColor=white&link=link" alt="Discord Badge">
  </a>
</div>
<br>
<p>To talk about the construction of a digital thermometer and the working logic of our project, we take our values with the LM35 temperature sensor and reflect the incoming analog data to our LCD screen after making various changes. Before starting the project, I would like to talk about the LM35 temperature sensor.</p>
<h2>What is LM35DZ Temperature Sensor?</h2>
<br>
<div align="center">
  <img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35.png?raw=true" width="300px" alt="LM35 Temperature Sensor">
</div>
<br>
  <p>The LM35DZ sensor reads the temperature and converts it into analog data. Thanks to this data, it allows us to obtain the temperature data of the environment or the device it is integrated with in the code line. This high quality temperature sensor can measure between -55°C and +150°C degrees. As its temperature increases, it also increases the output voltage at the same rate. The LM35DZ has 3 pins. You can find the functions of these legs in the image below.</p>
  <br>
<div align="center">
  <img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35DZ.png?raw=true" width="300px" alt="LM35DZ Output Pins">
</div>
<br>
<h2 align="center">What is a Potentiometer?</h2>
<div align="center">
  <img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/Potentiometer.png?raw=true" width="300px" alt="What is a Potentiometer?">
<br>
</div>
<p>Potentiometer is one of the types of resistors. It allows us to control how much resistance we apply to the circuit. In this application, we calculate how much resistance will be applied to the current going to the LCD.</p>
<br>
<div align="center">
  <img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/potentiometer2.gif?raw=true" alt="Potentiometer GIF">
</div>
<br>
<h2>Materials Required for Making a Digital Thermometer</h2>
<ul>
  <li>Jumper Cable</li>
  <li>Arduino UNO</li>
  <li>Breadboard</li>
  <li>LCD Display</li>
  <li>LM35DZ Temperature Sensor</li>
  <li>Potentiometer</li>
  <li>Resistance</li>
</ul>
<h2 align="center">Thermometer Project Diagram</h2>
<div align="center">
  <img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/Diagram.png?raw=true" width="500px" alt="Thermometer Project Diagram">
</div>

# Thermometer Project Source Codes

## Required Libraries

A library that includes basic Arduino functions.
````ino
Arduino.h
````

This library is used to control character LCD (Liquid Crystal Display) screens.
````ino
LiquidCrystal.h
````

It is used to support the I2C (Inter-Integrated Circuit) communication protocol. This library is often used to control devices like LCD screens.
````ino
Wire.h
````

````ino
#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

int lm35Pin = A0; 
LiquidCrystal lcd(0, 1, 8, 9, 10, 11);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   Heat  ");
  lcd.setCursor(0,1);
  lcd.println(" Calculating ");
  delay(5000);


}

void loop() {
  int celsius_value = (5.0 * analogRead(lm35Pin) * 100.0) / 6000;
  lcd.clear(); 
  lcd.setBacklight(LOW);
  lcd.setCursor(0,0);
  lcd.setCursor(0,1);
  lcd.print(" Heat: "); 
  lcd.print(celsius_value);
  lcd.print((char)223);
  lcd.print("C");
  delay(2000);
}
````

<h2 align="center">To Clone This Repository</h2>

````git
gh repo clone musarda/Arduino-Digital-Thermometer
````
