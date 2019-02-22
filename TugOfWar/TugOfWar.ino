int signal1, signal2, counter1 = 0, counter2 = 0, difference, outcome;

void setup() {
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  signal1 = digitalRead(12);
  signal2 = digitalRead(13);
  if (signal1 == 0) {
    counter1++;
    delay(200);
  }
  if (signal2 == 0) {
    counter2++;
    delay(200);
  }
  difference = counter1 - counter2;
  digitalWrite(outcome,LOW);
  outcome = 6 + difference;
  if (outcome < 2) {
    tone(11, 500, 1000);
    delay(1000);
    noTone(11);
    counter1 = 0;
    counter2 = 0;
  } else if (outcome > 10) {
    tone(11, 500, 1000);
    delay(1000);
    noTone(11);
    counter1 = 0;
    counter2 = 0;
  }
  digitalWrite(outcome,HIGH);
}
