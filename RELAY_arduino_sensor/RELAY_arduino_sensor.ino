
const int FS = 5; 
int BULB1 = 10;
int FSState = 0; 
void setup()
{                
  // initialize the digital pin as an output.
  pinMode(BULB1, OUTPUT);
  pinMode(FS, INPUT);
 // pinMode(led2, OUTPUT);
}

void loop()
{
  FSState = digitalRead(FS); 
  
  if (FSState == HIGH)
  {  
  digitalWrite(BULB1, HIGH);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(led2, HIGH); 
  delay(20); 
  } 
  
  else 
  {
  digitalWrite(BULB1, LOW);
  delay(20); 
  }

}
