int i;

void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  Serial.println("build 28-03-18");
  Serial.println("Fade program commenced.\n");
  delay(1000);
}

void loop() {
  for (i=0;i<=255;i++) {
    analogWrite(9,i);
    Serial.println(i);
    delay(10);
  }
  for (i=255;i>=0;i--) {
    analogWrite(9,i);
    Serial.println(i);
    delay(10);
  }
}
