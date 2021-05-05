#include<Servo.h>
Servo s;// servoyu s olarak tanımladık

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  
  s.attach(0);//0 pini servoya gidiyor
  s.write(0);//ilk değeri 0 tanımladık
}

void loop()
{
  int yon = analogRead(A1);
  int servo = map(yon,0,1023,0,360);
  s.write(servo);// a1 deki değeri okuyup servoya verdik
  delay(15);
  int hiz = analogRead(A0);
  if(digitalRead(9)>0){
    analogWrite(13,hiz);
    delay(15);
    analogWrite(12,0);// kırmızı bacağa yüksek voltaj verdik
     delay(15);
   
    
  }
  if(digitalRead(8)>0){
    analogWrite(12,hiz);
     delay(15);
    analogWrite(13,0);// siyah bacağa yüksek voltaj verdik
     delay(15);
    
    
  }
	
    
  
  
  
  
}