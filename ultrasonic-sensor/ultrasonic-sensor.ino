/*
 * Ultrasonic Sensor:
 * 
 * [Pin]    [Function]
 * VCC      Power (5V)
 * Trig     (Digital) Send ultrasonic pulse
 * Echo     (Digital) Receive reading
 * Gnd      Ground (Neg point)
 */

const int trig=2;
const int echo=3;
bool ledState;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);        //Trig
  pinMode(echo,INPUT);         //Echo
  pinMode(8, OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  long dur,in,cm;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  dur=pulseIn(3,HIGH);
  in=dur*0.0133/2;
  cm=dur*0.034/2;

  Serial.print(in);
  Serial.print(" in, ");
  Serial.print(cm);
  Serial.print("cm\n");

  /*
  if (cm<10) {
    ledState=!ledState;
    digitalWrite(13,ledState);
    delay(1500);
  }
  */

  if(cm>=30) {
    tone(8,3000,500);
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  else if(cm>=20) {
    tone(8,3000,250);
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
  }
  else if(cm>=10) {
    tone(8,3000,125);
    digitalWrite(13,HIGH);
    delay(125);
    digitalWrite(13,LOW);
    delay(125);
  }
  else if(cm>=5) {
    tone(8,3000,64);
    digitalWrite(13,HIGH);
    delay(64);
    digitalWrite(13,LOW);
    delay(64);
  }
  else {
    tone(8,3000,64);
    digitalWrite(13,HIGH);
    delay(64);
  }

  delay(100);
}

