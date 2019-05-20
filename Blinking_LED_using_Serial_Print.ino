void setup() {
  Serial.begin(115200);
pinMode(2,OUTPUT);

}

void loop() {
  Serial.println("LOW");
 digitalWrite(2,LOW);
 delay(5000);
 Serial.println("HIGH");
  digitalWrite(2,HIGH);
 delay(5000);
 
}
