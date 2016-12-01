#include "notes.h"
const int buzzerPin = 9;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  playNote( noteC4, HN);
  playNote( noteC5, HN);
}
void playNote(int note, int duration)
{
  tone(buzzerPin, note, duration);
  delay(duration);
}

