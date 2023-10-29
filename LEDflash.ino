#define LED_PIN 2
#define potentiometer_pin A2
int potval;

// link to video of code working -- https://youtube.com/shorts/e-hG2BWK5tQ?feature=share

void setup() { 
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
potval = analogRead(poteniometer_pin);

digitalWrite(LED_PIN, HIGH);
  delay(potval);
digitalWrite(LED_PIN, LOW);
  delay(potval);

}
