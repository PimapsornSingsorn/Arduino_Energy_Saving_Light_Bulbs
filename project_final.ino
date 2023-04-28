int IR_SENSOR = 8;
int Relay = 6; 
int LDR = 5;
int val_LDR = 0;
int val_IR = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Relay, OUTPUT);
  pinMode(IR_SENSOR, INPUT); }

void loop() { 
  val_LDR = analogRead(LDR);
  Serial.print("val_LDR = ");
  Serial.println(val_LDR);
  Serial.print(" ");
  val_IR = digitalRead(IR_SENSOR);
  Serial.print("val_IR = ");
  Serial.println(val_IR);

  if (digitalRead(IR_SENSOR) == LOW)
  { 
    if(val_LDR  > 500)
    {
      digitalWrite(Relay, HIGH);
    }
  }
  else 
  {
      digitalWrite(Relay, LOW);
  }
  delay(1000);
}