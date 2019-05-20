

void setup()
{
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(15,INPUT);
}

void loop() 
{

if(analogRead(15)==LOW)
{
  
 digitalWrite(2,HIGH);
Serial.println(analogRead(15));
}
else
{
  digitalWrite(2,LOW);
Serial.println(analogRead(15));
}
}
