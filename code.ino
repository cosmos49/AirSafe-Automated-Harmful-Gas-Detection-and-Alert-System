#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD (I2C address 0x27, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

int gasSensorPin = A0; // Gas sensor analog output pin connected to A0
int gasSensorValue = 0;
int ledPin = 13; // LED at pin 13
int buzzerPin = 7; // Optional: Buzzer at pin 7

// Threshold value for harmful gas detection
int threshold = 300; 

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  lcd.init();         // Initialize the LCD
  lcd.backlight();    // Turn on backlight
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gas Detector");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  gasSensorValue = analogRead(gasSensorPin);
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasSensorValue);

  if (gasSensorValue >= threshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Warning!!");
    lcd.setCursor(0, 1);
    lcd.print("Harmful Gas!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Air Quality:");
    lcd.setCursor(0, 1);
    lcd.print("Normal");
  }

  delay(1000); // Small delay
}
