int motor1Pin1 = 27; 
int motor1Pin2 = 26; 
int enable1Pin = 14; 
 

const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 200;
 
void setup() {

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
  
 
  ledcSetup(pwmChannel, freq, resolution);
  

  ledcAttachPin(enable1Pin, pwmChannel);
 
  Serial.begin(115200);
 
 
}
 
void loop() 
{

  Serial.println("Moving Forward");
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH); 
  delay(2000);

  }
