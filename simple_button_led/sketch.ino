#define led 21
#define button 0

void setup() {
  pinMode(led, OUTPUT);             //Modo de saída
  pinMode(button, INPUT_PULLUP);    //Modo de inputar e voltar(ação do pressionar).
}

void loop() {
  if(digitalRead(button) == LOW) {  //Se a leitura do botão for LOW.
  digitalWrite(led, HIGH);         //Se estiver pressionado o LED assiona.
  }
  else {
    digitalWrite(led, LOW);       // Se não estiver pressionado, LED desliga.
  }
}
