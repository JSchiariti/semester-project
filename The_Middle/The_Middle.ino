#include "notes.h"
const int buzzerPin = 9;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  playNote( noteFs3, EN);
  playNote( noteFs3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteFs3, EN);
  playNote( noteFs3, EN);
  playNote( noteFs3, EN);
  playNote( noteFs3, EN);
  playNote( noteFs3, EN);

  playNote( noteE3, EN);
  playNote( noteE3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);

  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);

  playNote( noteD3, EN); // ... measure 5
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteCs3, EN);

  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);
  playNote( noteCs3, EN);

  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteD4, HN);
  playNote( Rest, HN);

  playNote( Rest, EN); // ... measure 10
  playNote( noteD3, EN);
  playNote( noteD4, EN);
  playNote( noteD4, EN);
  playNote( noteD4, QN);
  playNote( noteE4, QN);

  playNote( noteCs4, HN);
  playNote( Rest, HN);

  playNote( Rest, EN);
  playNote( noteCs3, EN);
  playNote( noteCs4, EN);
  playNote( noteCs4, EN);
  playNote( noteCs4, EN);
  playNote( noteCs4, EN);
  playNote( noteCs4, EN);
  playNote( noteCs4, EN);

  playNote( noteD4, QN);
  playNote( noteB3, QN);
  playNote( noteA3, HN);

  playNote( Rest, QN);
  playNote( noteD3, EN);
  playNote( noteD4, QN);
  playNote( noteC4, EN);
  playNote( noteA3, EN);
  playNote( noteA3, DH);  // ... measure 15
  playNote( Rest, HN);

  playNote( Rest, QN);
  playNote( Rest, EN);
  playNote( noteD3, EN);
  playNote( noteD4, EN);
  playNote( noteD4, QN);
  playNote( noteD4, HN);
  playNote( Rest, QN);
  playNote( Rest, HN);

}
void playNote(int note, int duration)
{
  tone(buzzerPin, note, duration);
  delay(duration);
}
