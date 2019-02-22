float a;
float b;
float x;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = a/b;
  Serial.println(x);
}
