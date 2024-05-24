#define qtd_led 5
#define button 15
#define ledv 2

int pinosleds[qtd_led] = {0, 16, 5, 19, 21};

void setup() {
  for (int i = 0; i < qtd_led; i++) {
    pinMode(pinosleds[i], OUTPUT);  // Saída de dados conforme a lista. 
  }
  pinMode(ledv, OUTPUT);            // Saída do ledv
  pinMode(button, INPUT_PULLUP);    // Modo de inputar e voltar(ação do pressionar).
}

void loop() {
  while (digitalRead(button) == LOW) {
    digitalWrite(ledv, HIGH);
    // Nada acontece enquanto não pressionar o botão.
  }
  for (int i = 0; i < qtd_led; i++) {
    digitalWrite(pinosleds[i], HIGH);   // Acende o pino[i] 
    delay(500);
    digitalWrite(pinosleds[i], LOW);    // Apaga o mesmo pino[i]
  }
}
