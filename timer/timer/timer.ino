int s=-1;
int m=0;
int h=0;
int btnout=0;
int resetcount=0;
bool lightOffNext=false;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  Serial.println("build 21/02/18\nCommenced timer program.");
}

void loop() {
  btnout = digitalRead(2);
  if (btnout==0)
  {
    resetcount=resetcount+1;
    Serial.print("\n\nTimer restarted.\nRestarted ");
    Serial.print(resetcount);
    Serial.print(" time(s).\n");
    s=-1;
    m=0;
    h=0;
    lightOffNext=false;
  }
  if (lightOffNext==true)
  {
    lightOffNext=false;
    digitalWrite(13,LOW);
  }
  else
  {
   lightOffNext=true;
    ++s;
    if (s==60)
    {
      s=0;
      ++m;
    }
    if (m==60)
    {
      m=0;
      ++h;
    }
    Serial.print("\n");
    if (h<10)
    {
      Serial.print("0");
      Serial.print(h);
    }
    else
    {
      Serial.println(h);
    }
    Serial.print(":");
    if (m<10)
    {
      Serial.print("0");
    }
    Serial.print(m);
    Serial.print(":");
    if (s<10)
    {
      Serial.print("0");
    }
    Serial.print(s);
    digitalWrite(13,HIGH);
    tone(13,3000,100);
  }
  delay(500);
}
