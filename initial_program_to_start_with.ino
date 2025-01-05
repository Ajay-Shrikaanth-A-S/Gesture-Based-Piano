// Define constants for IR sensor, LED, and buzzer pins
const int irSensorPin1 = 2;    // Connect the IR1 sensor to digital pin 2
const int buzzerPin1 = 3;      // Connect the buzzer1 to digital pin 3
const int irSensorPin2 = 4;    // Connect the IR2 sensor to digital pin 4
const int buzzerPin2 = 5;      // Connect the buzzer2 to digital pin 5
const int irSensorPin3 = 6;    // Connect the IR1 sensor to digital pin 2
const int buzzerPin3 = 7;      // Connect the buzzer1 to digital pin 3
const int irSensorPin4 = 8;    // Connect the IR2 sensor to digital pin 4
const int buzzerPin4 = 9;      // Connect the buzzer2 to digital pin 5
const int irSensorPin5 = 10;    // Connect the IR1 sensor to digital pin 2
const int buzzerPin5 = 11;      // Connect the buzzer1 to digital pin 3
const int irSensorPin6 = 12;    // Connect the IR2 sensor to digital pin 4
const int buzzerPin6 = 13;      // Connect the buzzer2 to digital pin 5
const int irSensorPin7 = A5;    // Connect the IR2 sensor to digital pin 4
const int buzzerPin7 = A4;      // Connect the buzzer2 to digital pin 5


void setup() {
  pinMode(irSensorPin1, INPUT);
  pinMode(buzzerPin1, OUTPUT);
  pinMode(irSensorPin2, INPUT);
  pinMode(buzzerPin2, OUTPUT);
  pinMode(irSensorPin3, INPUT);
  pinMode(buzzerPin3, OUTPUT);
  pinMode(irSensorPin4, INPUT);
  pinMode(buzzerPin4, OUTPUT);
  pinMode(irSensorPin5, INPUT);
  pinMode(buzzerPin5, OUTPUT);
  pinMode(irSensorPin6, INPUT);
  pinMode(buzzerPin6, OUTPUT);
  pinMode(irSensorPin7, INPUT);
  pinMode(buzzerPin7, OUTPUT);
}

void loop() {
  // Read the state of the first IR sensor
  int irSensorState1 = digitalRead(irSensorPin1);

  if (irSensorState1 == HIGH) {
    // Object detected, turn on LED and buzzer
    digitalWrite(buzzerPin1, HIGH);
    tone(buzzerPin1, 450, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin1, LOW);
    noTone(buzzerPin1); // Stop sound...
    delay(1000); // ...for 1 sec
  }

  // Read the state of the second IR sensor
  int irSensorState2 = digitalRead(irSensorPin2);

  if (irSensorState2 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin2, HIGH);
    tone(buzzerPin2, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin2, LOW);
    noTone(buzzerPin2); // Stop sound...
    delay(1000); // ...for 1 sec
  }
    int irSensorState3 = digitalRead(irSensorPin3);

  if (irSensorState3 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin3, HIGH);
    tone(buzzerPin3, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin3, LOW);
    noTone(buzzerPin3); // Stop sound...
    delay(1000); // ...for 1 sec
  }
    int irSensorState4 = digitalRead(irSensorPin4);

  if (irSensorState4 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin4, HIGH);
    tone(buzzerPin4, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin4, LOW);
    noTone(buzzerPin4); // Stop sound...
    delay(1000); // ...for 1 sec
  }
    int irSensorState5 = digitalRead(irSensorPin5);

  if (irSensorState5 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin5, HIGH);
    tone(buzzerPin5, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin5, LOW);
    noTone(buzzerPin5); // Stop sound...
    delay(1000); // ...for 1 sec
  }
    int irSensorState6 = digitalRead(irSensorPin6);

  if (irSensorState6 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin6, HIGH);
    tone(buzzerPin6, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin6, LOW);
    noTone(buzzerPin6); // Stop sound...
    delay(1000); // ...for 1 sec
  }
    int irSensorState7 = digitalRead(irSensorPin7);

  if (irSensorState7 == HIGH) {
    // Object detected, turn on LED and buzzer
    
    digitalWrite(buzzerPin7, HIGH);
    tone(buzzerPin7, 250, 1000); // Send 1KHz sound signal...
    delay(1000); // ...for 1 sec
  } else {
    // No object detected, turn off LED and buzzer
    digitalWrite(buzzerPin7, LOW);
    noTone(buzzerPin7); // Stop sound...
    delay(1000); // ...for 1 sec
  }
}
