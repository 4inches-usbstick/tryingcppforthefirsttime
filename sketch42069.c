const int out = 8;
const int inp = 9;

void setup() {
pinMode(8, OUTPUT);
pinMode(9, INPUT);
Serial.begin(9600);
int i;
for (i = 0; i < 2; i = i + 1) {
digitalWrite(out, HIGH);
delay(50);
digitalWrite(out, LOW);
delay(10);
Serial.println(i);
}
digitalWrite(out, LOW);
}

int convert(int value) {
if (value == 1) {
return LOW;
} else if (value == 0) {
return HIGH;
}
}

void reset() {
pinMode(10, OUTPUT);
digitalWrite(10, HIGH);
}




void loop() {
int val;
int opens;
const int limit = 150; 
bool go = false;
val = digitalRead(inp);

if (val == LOW) {
  opens = opens + 1;
}
if (val == HIGH && opens >= 98+limit) {
reset();
}


if (opens > 98+limit) {
digitalWrite(out, 1);
}
delay(100);
//Serial.println(opens);
Serial.println(opens);
}
