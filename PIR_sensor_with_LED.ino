
 
void setup()
{
  pinMode(15,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(115200);
}
 
void loop()
{
 ;
 
  if(digitalRead(15)==HIGH)
  {
    digitalWrite(2,HIGH);
    Serial.println("Presence detected");
    delay(5000);
  }
 
 else {

digitalWrite(2, LOW);

}
}
