int btnout;
int score = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  btnout = digitalRead(2);
  if (btnout == 0) {
    digitalWrite(13,HIGH);
    score = score+1;
  }
  else digitalWrite(13,LOW);
  Serial.println(score);
  delay(100);
}
