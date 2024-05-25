#define leds 4
#define button 15

int firstgroup[leds] = {2, 0, 16, 5};
int secondgroup[leds] = {19, 21, 22, 23};

void setup() {
  int i = 0;
  while (i < leds) {
    pinMode(firstgroup[i], OUTPUT);
    pinMode(secondgroup[i], OUTPUT);
  }
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(button) == HIGH) {
    int i = 0;
    while (i < leds) {
      digitalWrite(firstgroup[i], HIGH);
      digitalWrite(secondgroup[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(firstgroup[i], LOW);
      digitalWrite(secondgroup[leds - 1 - i], LOW);
      i++;
    }
  }
  int i = 0;
  while (i < leds) {
    digitalWrite(firstgroup[i], HIGH);
    digitalWrite(secondgroup[i], HIGH);
    delay(250);
    digitalWrite(firstgroup[i], LOW);
    digitalWrite(secondgroup[i], LOW);
    i++;
  }
}