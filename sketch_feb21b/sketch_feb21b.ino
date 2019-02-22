int s=-1;
int m=0;
int h=0;
bool startupMessageProduced=false;
bool lightOffNext=false;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if (lightOffNext==true)
  {
    lightOffNext=false;
    digitalWrite=(13,LOW);
  }
  else
  {
    if (startupMessageProduced==false)
    {
      startupMessageProduced=true;
      Serial.println("build 21/02/18");
      Serial.println("");
      Serial.println("Commenced timer program.");
      Serial.println("");
    }
    digitalWrite(13,HIGH);
    lightOffNext=true;
    s=s+1;
    if (s==60)
    {
      s=0;
      m=m+1;
    }
    if (m==60)
    {
      m=0;
      h=h+1;
    }
    if (h<10)
    {
      Serial.println("0");
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
  }
  delay(500);
}
