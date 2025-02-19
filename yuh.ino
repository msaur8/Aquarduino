int pump = ; //pin for pump
int mositure = ; //pin for misture sensor

void setup() {
  Serial.begin(9600);
pinMode(pump, OUTPUT);
}

void loop() {
  int moistureRaw = analogRead() //(pin for humidity sensor) - reads sensor value
  int moistureReal = map(humidityRaw, 1023, 0, 0, 100); // - map(value, fromLOW, fromHIGH, toLOW, toHIGH)
  Serial.println(humidityReal);
  delay(100);
  if (moistureReal < 30) //if moisture level is below 30% pump turns on, otherwise it turns off
  {
    digitalWrite(pump, HIGH);
  }else {
    digitalwrite(pump, LOW);
  }
}
