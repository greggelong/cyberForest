#include <Servo.h>

Servo myservo; 

int sensorPin = A1;
int sensorVal =0;
int pos =0;

void setup() {
  pinMode(sensorPin, INPUT);
  myservo.attach(9);
  myservo.write(0);
  Serial.begin(9600);


}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  
  delay(100);
  
  // trigger
  if (sensorVal>160){
    Serial.println("boom");
    for(pos =0; pos<=180; pos++){
      myservo.write(pos);
      delay(15);
    }
    for(pos =180; pos>=0; pos--){
      myservo.write(pos);
      delay(15);
    }
    
  }

  
}