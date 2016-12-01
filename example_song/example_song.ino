const int buzzerPin = 9;
const int songLength = 18;
char notes[] = "cdfda ag cdfdg gf ";
int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
int tempo = 150;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);
}

void loop() 
{
  int m, duration;

  for (m = 0; m < songLength; m++)
  {
    duration = beats[m] * tempo;

    if (notes[m] == ' ')          
    {
      delay(duration);            
    }
    else                          
    {
      tone(buzzerPin, frequency(notes[m]), duration);
      delay(duration);            
    }
    delay(tempo/10);              
  }
  
  
  while(true){}
  
}


int frequency(char note) 
{
  
  
  int m;
  const int numNotes = 9;  
  
 

  char names[] = { 'c', 'd', 'e', 'f','u', 'g', 'a', 'b', 'C' };
  int frequencies[] = {262, 294, 330, 349, 370, 392, 440, 494, 523};
  

  
  for (m = 0; m < numNotes; m++)  
  {
    if (names[m] == note)         
    {
      return(frequencies[m]);     
    }
  }
  return(0);  
              
}

  

  

  


