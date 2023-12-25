int sensorPin = A1;
int sensorVal =0;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);


}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  
  delay(100);

  
}
