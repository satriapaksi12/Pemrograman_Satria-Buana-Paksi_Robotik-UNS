const int pwm = 5;
int i;

void setup() 
{
  pinMode(pwm,OUTPUT);

}

void loop() {
  // putar Motor dari kecepatan rendah ke kecepatan tinggi
  for (i=0;i<=255;i += 1)
  }
  digitalWrite(pwm,LOW);
  analogWrite(pwm,i);
  delay(15);
  }
  //putar Motor dari kecepatan rendah ke kecepatan tinggi dengan arah sebaliknya
  for (i=255;i>= 0;i -= 1)
  {
    digitalWrite(pwmm,HIGH);
    analogWrite(pwm,i);
    delay(15);
  }


  }
