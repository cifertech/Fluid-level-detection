# Fluid-level-detection
Using the same sensor, namely the Water Level Sensor and the Oled display, as well as the Arduino board, we will make a device for monitoring the level of water level or the presence of water leakage.

## What it DO!
In this project, we will measure the amount of water leakage using a water level sensor, and the amount of the measured value will be displayed in the display with numbers, and then the value will be displayed graphically. These values are obtained by changing the water level on the water level sensor, the resistance between the copper lines on the pcb of this sensor will change, and thus we will be able to measure the change in voltage at the output to determine the correct amount of water leakage. Of course, a common problem with these sensors is their short lifespan in a humid environment. Constant voltage on the probe significantly increases the corrosion rate significantly.

### Items needed
-water level sensor
-Arduino nano
-Oled 0.96

### Required libraries
-Wire
-SPI

## Conclusion
After uploading the code and establishing the connections, open a Serial Monitor window to see the Arduino output, you can also instantly see the values ​​change in the OLED display. When the sensor does not touch anything, you should see a value of 0. To see changes in the water, you can gently place the sensor in a glass of water and watch the changes as the water level changes. You want to control it, calibrate it. As you know, pure water is not conductive. In fact, it is the minerals and impurities in the water that make it conductive. Therefore, your sensor may be more or less sensitive depending on the type of water you use.


 Full Tutorial at http://cifertech.net/
