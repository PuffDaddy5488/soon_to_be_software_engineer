// Supplies Needed:  Arduino Uno, A breadboard(optional), a LED of any color, and two jumper wires(also optional but required if your using a breadboard.).
int ledPin = (13);
void setup() {
pinMode(ledPin, OUTPUT);
Serial.println(9600, "the led is on");
String("led is on");
int(ledPin = 13);
Serial.println(9600);
}

void loop() {
  pinMode(ledPin, OUTPUT);
  String("led is on");
  Serial.println(9600, "ledPin");
delay(1000);
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, 13);
delay(1000);
digitalWrite(ledPin, HIGH);
Serial.println("The led is on");
delay(1000);
Serial.println("The led is off");
digitalWrite(ledPin, LOW);
Serial.println(9600, "The led is off");
pinMode(Serial, ledPin);
pinMode(Serial, OUTPUT);
Serial.println(9600);
}
