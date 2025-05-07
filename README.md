🔥 Home Automation Heater
An Arduino-based smart heater controller that automates heating based on real-time temperature readings.

📦 Features
🌡️ Temperature Monitoring: Continuously reads ambient temperature using the LM35DZ sensor.

⚙️ Automated Control: Activates or deactivates the heater based on predefined temperature thresholds.

💡 User Feedback: Provides real-time temperature updates via the Serial Monitor.
ACL Anthology
+1
NSEC
+1

🛠️ Hardware Requirements
Arduino UNO or compatible board

LM35DZ Temperature Sensor

Relay Module (to control the heater)

Heater (ensure it matches the relay's specifications)

Jumper wires and breadboard
Ensure the heater is connected to the relay module as per its specifications. Always take necessary precautions when working with high-voltage devices.

📄 Code Overview
The core logic reads the analog value from the LM35DZ sensor, converts it to a temperature in Celsius, and then controls the relay module based on the temperature:
  if (Temperature_by_priyanshu >= 18)
  Adjust the temperature thresholds (20.0 and 25.0) as per your requirements.

🚀 Getting Started
Assemble the Circuit: Connect the LM35DZ sensor and relay module to the Arduino as shown above.

Upload the Code: Use the Arduino IDE to upload the provided sketch to your Arduino board.

Monitor the Output: Open the Serial Monitor to view real-time temperature readings and heater status.

⚠️ Safety Precautions
Always ensure the heater and relay module are compatible.

Avoid touching the heater or relay module when powered.

Use protective gear and follow safety guidelines when working with electrical devices.

📚 Resources
LM35DZ Datasheet: https://www.ti.com/lit/ds/symlink/lm35.pdf

Arduino UNO Documentation: https://docs.arduino.cc/hardware/uno-rev3/

Relay Module Guide: https://randomnerdtutorials.com/guide-for-relay-module-with-arduino/

Feel free to customize this README.md further to match your project's specifics. Let me know if you need assistance with anything else!
