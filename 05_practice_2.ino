int a = 0;

#define PIN7 7
void setup() {
  pinMode(PIN7, OUTPUT);
}

void loop() {
  digitalWrite(PIN7, 0);
  delay(1000);

  while (a < 5){
    digitalWrite(PIN7, 1);
    delay(100);
    digitalWrite(PIN7, 0);
    delay(100);
    ++a;
}
  digitalWrite(PIN7, 1);
  exit(0);
}
