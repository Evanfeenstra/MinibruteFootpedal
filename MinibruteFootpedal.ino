
const int ledPin = 13;
int val = 0;
int foot = 0;
int oldfoot;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  oldfoot=foot;
  foot=analogRead(A0);
  if(abs(foot-oldfoot)>22){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  val = foot/4;
  analogWrite(A12,val);
  delay(3);
}

