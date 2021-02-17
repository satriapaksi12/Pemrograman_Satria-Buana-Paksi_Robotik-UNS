// library Servo
#include <Servo.h>
 
Servo myservo;  
void setup() {
  myservo.attach(6);  // servo terhubung pin 6 
}
 
void loop() {
  //sudut 0
  myservo.write(0); 
  delay(2000); 
  //sudut 90
  myservo.write(90); 
  delay(2000);  
  //sudut 180
  myservo.write(180); 
  delay(2000);
}
