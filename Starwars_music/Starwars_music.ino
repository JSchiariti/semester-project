#include "notes.h"
const int buzzerPin = 9;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  
  playNote( noteG3, HN);
  playNote( noteD4, HN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);

  playNote( noteC4, EN); // ... measure 5
  playNote( noteB3, EN);
  playNote( noteC4, EN);
  playNote( noteA3, HN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteG3, HN);
  playNote( noteD4, HN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);

  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteC4, EN);
  playNote( noteA3, HN);
  playNote( noteD3, DE);
  playNote( noteD3, SN);

  playNote( noteE3, DQ);  // ... measure 10
  playNote( noteE3, EN);
  playNote( noteC4, QN);
  playNote( noteB3, QN);
  playNote( noteA3, QN);
  playNote( noteG3, QN);

  playNote( noteG3, EN);
  playNote( noteA3, EN);
  playNote( noteB3, EN);
  playNote( noteA3, QN);
  playNote( noteE3, EN);
  playNote( noteFs3, QN);
  playNote( noteD3, DE);
  playNote( noteD3, SN);

  playNote( noteE3, DQ);
  playNote( noteE3, EN);
  playNote( noteC4, QN);
  playNote( noteB3, QN);
  playNote( noteA3, QN);
  playNote( noteG3, QN);

  playNote( noteD4, DE);
  playNote( noteA3, SN);
  playNote( noteA3, HN);
  playNote( Rest 0, EN);
  playNote( noteD3, EN);

  playNote( noteE3, DQ);
  playNote( noteE3, EN);
  playNote( noteC4, QN);
  playNote( noteB3, QN);
  playNote( noteA3, QN);
  playNote( noteG3, QN);

  playNote( noteG3, EN);  // ... measure 15
  playNote( noteA3, EN);
  playNote( noteB3, EN);
  playNote( noteA3, QN);
  playNote( noteE3, EN);
  playNote( noteA3, QN);
  playNote( noteD4, DE);
  playNote( noteD4, SN);

  playNote( noteG4, QN);
  playNote( noteF4, EN);
  playNote( noteEb4, QN);
  playNote( noteD4, EN);
  playNote( noteC4, QN);
  playNote( noteBb3, EN);
  playNote( noteA3, QN);
  playNote( noteG3, EN);

  playNote( noteA3, DH);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteG3, HN);
  playNote( noteD4, HN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);
  
  playNote( noteC4, EN);  // ... measure 20
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);

  playNote( noteC4, EN); 
  playNote( noteB3, EN);
  playNote( noteC4, EN);
  playNote( noteA3, HN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);
  playNote( noteD3, EN);

  playNote( noteG3, HN);
  playNote( noteD4, HN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);
  
  playNote( noteC4, EN);
  playNote( noteB3, EN);
  playNote( noteA3, EN);
  playNote( noteG4, HN);
  playNote( noteD4, QN);

  playNote( noteA4, EN);  // ... measure 25
  playNote( noteG4, EN);
  playNote( noteFs4, EN);
  playNote( noteG4, QN);
  playNote( noteG3, EN);
  playNote( noteG3, EN);
  playNote( noteG3, EN);
  playNote( noteG3, QN);

} 
void playNote(int note, int duration)
{
  tone(buzzerPin, note, duration);
  delay(dur
}

