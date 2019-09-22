const int numLEDS=5;
const int lights=5;
const int pump=4;
const int pot=2;
int onDelay =20;
int offDelay=20;
int value=0;

void setup() {  
  Serial.begin(9600);
  Serial.println("on for: "+String(onDelay)+"   off for "+String(offDelay));
  pinMode(lights,OUTPUT);
  pinMode(pump,OUTPUT);
  value = analogRead(pot);
}

void loop() {
  value = analogRead(pot);
  digitalWrite(lights,HIGH);
  delay(value);
  digitalWrite(lights,LOW);
  delay(value);
}
