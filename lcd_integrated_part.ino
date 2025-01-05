
#include <Wire.h>
#include <Adafruit_TMD2671.h>
#include <Adafruit_MPR121.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define constants for IR sensor, buzzer, and LCD pins
const int buzzerPin = 3; // Connect the buzzer to digital pin 3

// Create a gesture sensor object
Adafruit_TMD2671 tmd = Adafruit_TMD2671();

// Define note frequencies for the piano
const int C4 = 261;
const int D4 = 293;
const int E4 = 329;
const int F4 = 349;
const int G4 = 392;
const int A4 = 440;
const int B4 = 493;
const int C5 = 523;

void setup() {
  pinMode(buzzerPin, OUTPUT);

  // Initialize the LCD
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.clear();

  // Initialize gesture sensor
  if (!tmd.begin()) {
    lcd.print("Error initializing");
    while (1);
  }

  lcd.print("Gesture Piano");
  delay(2000);
  lcd.clear();
}

void loop() {
  uint8_t gesture = tmd.readGesture();

  switch (gesture) {
    case DIR_UP:
      playNote(C4);
      lcd.clear();
      lcd.print("Gesture: Up");
      break;
    case DIR_DOWN:
      playNote(D4);
      lcd.clear();
      lcd.print("Gesture: Down");
      break;
    case DIR_LEFT:
      playNote(E4);
      lcd.clear();
      lcd.print("Gesture: Left");
      break;
    case DIR_RIGHT:
      playNote(F4);
      lcd.clear();
      lcd.print("Gesture: Right");
      break;
    case DIR_NEAR:
      playNote(G4);
      lcd.clear();
      lcd.print("Gesture: Near");
      break;
    case DIR_FAR:
      playNote(A4);
      lcd.clear();
      lcd.print("Gesture: Far");
      break;
    default:
      noTone(buzzerPin);
      lcd.clear();
      lcd.print("No Gesture");
  }

  delay(500);
}

void playNote(int frequency) {
  tone(buzzerPin, frequency, 500);
  delay(500);
  noTone(buzzerPin);
}
