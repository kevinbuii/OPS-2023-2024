#define LED_PIN 2
#define potentiometer_pin A2
int potval;

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
