int m=0;
void setup() {
 pinMode(A0,INPUT);
 pinMode(8,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int m = analogRead(A0);
  Serial.println(m);
  delay(500);

  if(m > 450){
    digitalWrite(8,HIGH);
    }else{
      digitalWrite(8,LOW);
      }
}
