# 🌬️ AirSafe: Automated Harmful Gas Detection and Alert System

**AirSafe** is an automated harmful gas detection and alert system designed to ensure safety by continuously monitoring air quality. Using an analog gas sensor, the system detects the presence of harmful gases and activates visual and auditory alerts when gas levels exceed a safe threshold. The system also displays real-time status on an I2C LCD screen, providing immediate feedback in case of a hazardous gas leak.

![Image](https://github.com/user-attachments/assets/4eb15eff-3e0f-4f3f-9782-24d61b139321)

---

## 🛠️ Features

- 🔍 **Real-Time Gas Detection**: Continuously monitors air quality for harmful gas levels.
- 📟 **LCD Display**: Displays current air quality and status (Normal/Warning).
- 🚨 **Alerts**: Activates an LED and buzzer when harmful gas levels are detected.
- 💻 **Serial Monitoring**: Output gas sensor values to the Serial Monitor for debugging.
- 🔒 **Safety Application**: Ideal for industrial, laboratory, or home safety against gas leaks.

---

## ⚙️ Components Used

| Component             | Quantity |
|-----------------------|----------|
| Arduino Uno/Nano      | 1        |
| Gas Sensor (e.g., MQ-2) | 1        |
| I2C 16x2 LCD Display  | 1        |
| Buzzer                | 1        |
| LED                   | 1        |
| Resistors (220Ω)      | 1        |
| Jumper Wires          | -        |
| Breadboard            | 1        |

---

## 🔌 Circuit Diagram

> *(Insert Fritzing or wiring diagram here if available)*

- **Gas Sensor (MQ-2 or similar)**  
  - VCC → 5V  
  - GND → GND  
  - AOUT → A0  

- **LCD (I2C)**  
  - SDA → A4 (on Uno)  
  - SCL → A5 (on Uno)  

- **Buzzer** → Pin 7  
- **LED** → Pin 13 (with resistor)

---

## 📋 Installation & Upload

1. Connect all hardware components as per the circuit diagram.
2. Install the `LiquidCrystal_I2C` library in the Arduino IDE.
3. Upload the code from `gas_detector.ino` to your Arduino board.
4. Open the Serial Monitor (9600 baud) to monitor gas sensor readings.

---

## 📦 Applications

🚗 Vehicle Safety: Detects harmful gases in confined spaces like vehicles or garages.
🧑‍🔧 Industrial Safety: Ensures workplace safety by monitoring harmful gases in factories, laboratories, or chemical plants.
🏠 Home Safety: Protects against gas leaks in residential environments.
🧪 Educational Purpose: Demonstrates real-time gas monitoring technology for academic or safety training purposes.

## 📜 License

This project is licensed under the MIT License.
Feel free to modify, distribute, and use the code with proper attribution.

## ⭐️ Show Your Support

If you find this project useful, find me  **Email**:[here](bbharath4499@gmail.com)

```cpp
gasSensorValue = analogRead(gasSensorPin);
if (gasSensorValue >= threshold) {
  // Trigger warning with LED and buzzer
}
