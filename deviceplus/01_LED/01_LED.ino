#define PIN_LED 13
#define DELAY_MSEC 250

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(DELAY_MSEC);
  digitalWrite(PIN_LED, LOW);
  delay(DELAY_MSEC);
}
