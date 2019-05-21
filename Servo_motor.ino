#include <Servo.h>
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;



Servo myservo;
int pos=0;

void setup() 
{
 
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200); 
myservo.attach(13);

}

void loop() 
{
   digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trigPin,LOW);
 duration=pulseIn(echoPin,HIGH);
 distance=duration*0.034/2;
 Serial.print("distance");
  Serial.println(distance);
  if(distance<40)
  {
     
 for(pos=0;pos<=180;pos+=1)
 {
  myservo.write(pos);
 
  delay(15);
 }
  }
  else 
  {
      
 for(pos=180;pos>=0;pos-=1)
 {
  myservo.write(pos);
 
  delay(15);
 }
}
}
