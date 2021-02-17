int pinLED1 = 2;
int pinLED2 = 3;
  
void setup()
{
 pinMode(pinLED1, OUTPUT);
 pinMode(pinLED2, OUTPUT);
}

void loop() 
{
  digitalWrite(pinLED1,HIGH);
  digitalWrite(pinLED2,LOW);
  delay(750);
  digitalWrite(pinLED1,LOW);
  digitalWrite(pinLED2,HIGH);
  delay(750);
}
