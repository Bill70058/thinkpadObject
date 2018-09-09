
void alarmBell(){
   digitalWrite(3,true);
  delay(1000);
  digitalWrite(3,false);
  delay(500);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //alarmBell();
 if(digitalRead(A0) == HIGH){
  Serial.write("HIGH");
 } else{
  Serial.write("LOW");
 }
}
