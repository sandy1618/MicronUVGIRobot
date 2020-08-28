/*Arduino IDE Sketch
Key Hardware: Attiny85 Board, 12V Relay Switch & Generic PIR Sensor Module*/

int sensorPin = 2;          // Set up a PIR sensor pin
int stPin =1;               // the number of status indicator pin
int pirState = LOW;
int val = 0;
int relayPin = 3;           //Set up a Relay pin
int state = LOW;
int ledState = LOW;         // For the LED indicators

void setup() {
pinMode(sensorPin, INPUT);
pinMode(relayPin, OUTPUT);
pinMode(stPin,OUTPUT);
digitalWrite(sensorPin,HIGH); // internal pull-up option
digitalWrite(stPin,HIGH);
Serial.begin(9600);
}

void loop() {
val = digitalRead(sensorPin);  // read input value
if (val == HIGH) {            // check if the input is HIGH
digitalWrite(relayPin, HIGH);  // turn Relay ON
ledState = HIGH;
delay(150);

if (pirState == LOW) {
Serial.println("Motion detected!");
pirState = HIGH;  
ledState = LOW;  // turn Relay OFF - UV tubes and LED indicators turn off
}
} else {
digitalWrite(relayPin, LOW); // turn Relay OFF - UV tubes and LED indicators are off
delay(150); //stay off for atleast 15 seconds
state = HIGH;
ledState = LOW; // status indicator mode - optional
if (pirState == HIGH) {
Serial.println("Motion ended!");
pirState = LOW;
ledState = HIGH;
}
}
}
// End Of Code
