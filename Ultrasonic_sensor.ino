const int trigPin=4;
const int echoPin=5;
long duration;
int distance;

void setup() 
{
  pinMode(2,OUTPUT);
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
  if(distance<4)
  {
      digitalWrite(15,HIGH);
  }
    else if(distance>4&&distance<15)
  {
    digitalWrite(13,HIGH);
  }
   else 
  {
     digitalWrite(12,HIGH);
}
}
