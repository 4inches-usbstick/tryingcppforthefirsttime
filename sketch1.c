void setup() {
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    int reading;
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    Serial.begin(9600);  

    digitalWrite(8, HIGH);
    delay(50);
    digitalWrite(8, LOW);
}
int taste() {
    int readi;
    digitalWrite(7, HIGH);
    delay(20);
    readi = analogRead(A5);
    digitalWrite(7, LOW);
    return readi;
    }
void red() {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
}
void gree() {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
}
void yell() {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
}
void off() {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}



void loop() {
  int reading = taste();
  Serial.println(reading);
   digitalWrite(8, LOW);

  if (reading < 940) {
  red();
  digitalWrite(8, HIGH);
  }
  
  if (reading > 940) {
    gree();
  }
 
delay(1000);
}
