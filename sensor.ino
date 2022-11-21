int PIRPin = 8;
int LEDPin = 7;

void setup(){
  pinMode(PIRPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int sensorValue = digitalRead;(PIRPin);
  if(sensorValue == 1){
    digitalWrite(LEDPin, HIGH);
  }
}