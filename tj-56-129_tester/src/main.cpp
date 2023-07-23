#include <Arduino.h>

// Define the pins
const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;

void setup()
{
  // Initialize the pins as output
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
}

void setMelody(char pinAValue, char pinBValue, char pinCValue, char pinDValue)
{
  digitalWrite(pinA, pinAValue);
  digitalWrite(pinB, pinBValue);
  digitalWrite(pinC, pinCValue);
  digitalWrite(pinD, pinDValue);
}

void loop()
{
  // Play a melody by sending a combination of signals
  setMelody(HIGH, HIGH, HIGH, HIGH);

  // Wait for the melody to finish before sending the next combination
  delay(10000); // 10 seconds delay. Adjust this according to the length of your melody
}
