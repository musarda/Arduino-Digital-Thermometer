# Arduino Digital Thermometer
To talk about the construction of a digital thermometer and the working logic of our project, we take our values ​​with the LM35 temperature sensor and reflect the incoming analog data to our LCD screen after making various changes. Before starting the project, I would like to talk about the LM35 temperature sensor.

# What is LM35DZ Temperature Sensor?

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35.png?raw=true" width="300px">

> LM35 Temperature Sensor

The LM35DZ sensor reads the temperature and converts it into analog data. Thanks to this data, it allows us to obtain the temperature data of the environment or the device it is integrated with in the code line. This high quality temperature sensor can measure between -55°C and +150°C degrees. As its temperature increases, it also increases the output voltage at the same rate. The LM35DZ has 3 pins. You can find the functions of these legs in the image below.

<img src="https://github.com/musarda/Arduino-Digital-Thermometer/blob/main/src/img/LM35DZ.png?raw=true" width="300px">

> LM35DZ Output Pins

Talking about our LM35 Temperature Sensor this much will be enough to understand the concept. Now, let's quickly touch on the potentiometer, which is another element of our project.

