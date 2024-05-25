#define leds 4
#define button 15

int firstgroup[leds] = {2, 0, 16, 5};
int secondgroup[leds] = {19, 21, 22, 23};

void setup() {
  for(int i = 0; i < leds; i++) {
    pinMode(firstgroup[i], OUTPUT);
    pinMode(secondgroup[i], OUTPUT);
  }
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(button) == HIGH) {
    for(int i = 0; i < leds; i++) {
      digitalWrite(firstgroup[i], HIGH);
      digitalWrite(secondgroup[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(firstgroup[i], LOW);
      digitalWrite(secondgroup[leds - 1 - i], LOW);
    }
  }
  for(int i = 0; i < leds; i++) {
    digitalWrite(firstgroup[i], HIGH);
    digitalWrite(secondgroup[i], HIGH);
    delay(250);
    digitalWrite(firstgroup[i], LOW);
    digitalWrite(secondgroup[i], LOW);
  }
}