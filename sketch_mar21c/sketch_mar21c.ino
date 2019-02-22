void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  tone(13,3000,50);
  delay(50);
  noTone(13);
  delay(900);
}
