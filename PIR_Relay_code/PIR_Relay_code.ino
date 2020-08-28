int sensorPin = 2;          // Set up a PIR sensor pin
int pirState = LOW;
int val = 0;
int relayPin = 3;           //Set up a Relay pin

void setup() {
pinMode(sensorPin, INPUT);
pinMode(relayPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
val = digitalRead(sensorPin);  // read input value
if (val == HIGH) {            // check if the input is HIGH
digitalWrite(relayPin, HIGH);  // turn Relay ON
delay(150);

if (pirState == LOW) {
Serial.println("Motion detected!");
pirState = HIGH;
}
} else {
digitalWrite(relayPin, LOW); // turn Relay OFF - UV tubes and LED indicators turn off
delay(150); //stay off for atleast 15 seconds
if (pirState == HIGH) {
Serial.println("Motion ended!");
pirState = LOW;
}
}
}
