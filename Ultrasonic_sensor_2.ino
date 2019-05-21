const int trigPin=4;
const int echoPin=5;
long duration;
int distance;

void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);
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
      digitalWrite(15,HIGH);
        digitalWrite(12,LOW);
          digitalWrite(13,LOW);
  }
    else if(distance>40&&distance<150)
  {
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
          digitalWrite(15,LOW);
  }
   else 
  {
      digitalWrite(12,HIGH);
      digitalWrite(15,LOW);
          digitalWrite(13,LOW);
}
}
