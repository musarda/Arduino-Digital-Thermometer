# Arduino Digital Thermometer
To talk about the construction of a digital thermometer and the working logic of our project, we take our values ​​with the LM35 temperature sensor and reflect the incoming analog data to our LCD screen after making various changes. Before starting the project, I would like to talk about the LM35 temperature sensor.

# What is LM35DZ Temperature Sensor?

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35.png?raw=true" width="300px">

> LM35 Temperature Sensor

The LM35DZ sensor reads the temperature and converts it into analog data. Thanks to this data, it allows us to obtain the temperature data of the environment or the device it is integrated with in the code line. This high quality temperature sensor can measure between -55°C and +150°C degrees. As its temperature increases, it also increases the output voltage at the same rate. The LM35DZ has 3 pins. You can find the functions of these legs in the image below.

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35DZ.png?raw=true" width="300px">

> LM35DZ Output Pins

Talking about our LM35 Temperature Sensor this much will be enough to understand the concept. Now, let's quickly touch on the potentiometer, which is another element of our project.

# What is a Potentiometer?

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/Potentiometer.png?raw=true" width="300px">

> What is a Potentiometer?

Potentiometer is one of the types of resistors. It allows us to control how much resistance we apply to the circuit. In this application, we calculate how much resistance will be applied to the current going to the LCD.

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/potentiometer2.gif?raw=true">

# Materials Required for Making a Digital Thermometer
* Jumper Cable
* Arduino UNO
* Breadboard
* LCD Display
* LM35DZ Temperature Sensor
* Potentiometer
* Resistance

# Thermometer Project Diagram

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/Diagram.png?raw=true" width="500px">

> Termometre Devre Şeması

# Thermometer Project Source Codes
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
