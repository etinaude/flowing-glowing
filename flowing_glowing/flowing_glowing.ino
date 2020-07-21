const int lights=4;
const int pump=4;
const int pot=2;
const int speak=3;
int onDelay =20;
int offDelay=20;
int value=500;

void setup() {  
  Serial.begin(9600);
  pinMode(lights,OUTPUT);
  pinMode(pump,OUTPUT);
  pinMode(speak,OUTPUT);
  digitalWrite(pump,HIGH);
}

void loop() {
  if(analogRead(pot)==0){
    onDelay =0;
    offDelay=200;  
  }
  else if(analogRead(pot)==1023){
    onDelay =200;
    offDelay = 0;
  }else{
   value = (15+(analogRead(pot))/20);
   onDelay =value;
   offDelay=value; 
  }
  if(onDelay>0){
  digitalWrite(lights,HIGH);
  digitalWrite(speak,HIGH);
  delay(onDelay);
  }
  if(offDelay>0){
  digitalWrite(lights,LOW);
  digitalWrite(speak,LOW);
  delay(offDelay);
  }
  Serial.println(value);
}
