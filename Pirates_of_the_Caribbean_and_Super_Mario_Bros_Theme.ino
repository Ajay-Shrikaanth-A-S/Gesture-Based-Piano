
// Super Mario Bros. theme
const int E5 = 659;
const int C5 = 523;
const int G5 = 784;
const int G4 = 392;
const int E4 = 330;
const int A4 = 440;
const int B4 = 466;
const int Bb4 = 466;
const int Ab4 = 415;
const int D5 = 587;
const int F5 = 698;
const int A5 = 880;
const int B5 = 988;

const int BUZZER_PIN = 9;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Super Mario Bros. theme
  int melody[] = {E5, E5, 0, E5, 0, C5, E5, 0, G5, 0, G4, 0, E4, 0, A4, 0, B4, 0, Bb4, A4, 0, A4, Ab4, G4, E5, G5, A5, 0, F5, G5, 0, E5, 0, C5, D5, B4, 0, Bb4, A4, 0, A4, Ab4, G4, E5, G5, A5, 0, F5, G5, 0, E5, 0, C5, D5, B4, 0, Bb4, A4, 0, A4, Ab4, G4};
  int noteDurations[] = {8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 4, 4, 8, 4, 8, 4, 8, 4, 4, 4, 8, 4, 8, 4, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 8, 4, 4, 4, 8, 4, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 8, 8, 8, 4, 8, 4};

  // Play Super Mario Bros. theme
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    if (melody[i] == 0) {
      delay(noteDurations[i] * 100); // Pause
    } else {
      tone(BUZZER_PIN, melody[i], noteDurations[i] * 100); // Play note
      delay(noteDurations[i] * 110); // Delay between notes
      noTone(BUZZER_PIN); // Stop the tone
    }
  }

  delay(1000); // Pause between loops
  playPiratesTheme(); // Call Pirates of the Caribbean theme
}

void playPiratesTheme() {
  // Pirates of the Caribbean theme
  int pirateMelody[] = {E4, G4, A4, G4, F4, E4, 0, E4, G4, A4, G4, F4, E4, 0, G4, A4, B4, A4, G4, 0, E4, G4, A4, G4, F4, E4};
  int pirateNoteDurations[] = {8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8};

  for (int i = 0; i < sizeof(pirateMelody) / sizeof(pirateMelody[0]); i++) {
    if (pirateMelody[i] == 0) {
      delay(pirateNoteDurations[i] * 100); // Pause
    } else {
      tone(BUZZER_PIN, pirateMelody[i], pirateNoteDurations[i] * 100); // Play note
      delay(pirateNoteDurations[i] * 110); // Delay between notes
      noTone(BUZZER_PIN); // Stop the tone
    }
  }

  delay(1000); // Pause between loops
}
