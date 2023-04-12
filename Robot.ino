int IRSensor = 9;
int LED = 13;
long duration;
int distance;

void setup() {

    pinMode(12, OUTPUT); 
    pinMode(9, OUTPUT); 
  

    Serial.begin(9600);
    Serial.println("Serial Working"); 
    pinMode(IRSensor, INPUT);
    pinMode(LED, OUTPUT); 
    pinMode(8, OUTPUT); 
  }
  
void loop(){
  delayMicroseconds(2);
   duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
   Serial.print("Distance: ");
  Serial.println(distance);
  int sensorStatus = digitalRead(IRSensor); 
  if (sensorStatus == 1) 
  {
   
    digitalWrite(LED, LOW); 
    Serial.println("Motion Detected!"); 
  }
  else  {
    
    digitalWrite(LED, HIGH);
    Serial.println("Motion Ended!"); 
  }
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);   
  analogWrite(3, 255);   
  
  
  digitalWrite(13, LOW);  
  digitalWrite(8, LOW);   
  analogWrite(11, 123);    
  
  delay(3000);
  
  digitalWrite(9, HIGH);  
  digitalWrite(8, HIGH);  
  
  delay(1000);
  
  digitalWrite(12, LOW);  
  digitalWrite(9, LOW);   
  analogWrite(3, 123);    
  
  digitalWrite(13, HIGH); 
  digitalWrite(8, LOW); 
  analogWrite(11, 255); 
  delay(3000);
  
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  
  delay(1000);
}
