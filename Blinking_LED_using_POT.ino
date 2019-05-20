
int a;
void setup()
{
  
  
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(15,INPUT);
}

void loop() 
{
a=analogRead(15)/4;
Serial.println(a);
if(a>1024)
{
  
 digitalWrite(2,HIGH);

}
else
{
  digitalWrite(2,LOW);

}
}
