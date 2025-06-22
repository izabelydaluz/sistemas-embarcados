
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;

unsigned long tempoAnterior = 0;
int estadoAtual = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);


  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void loop() {
  unsigned long tempoAtual = millis();

  if (estadoAtual == 0) {
    digitalWrite(LED1, HIGH);
    tempoAnterior = tempoAtual;  // Reseta o temporizador
    estadoAtual = 1;             // Vai para o próximo passo
    
  }

  if (estadoAtual == 1) {  // Espera 125ms e liga LED2
    if (tempoAtual - tempoAnterior >= 125) {
      digitalWrite(LED2, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 2;
    }
  }

  if (estadoAtual == 2) {  // Espera 250ms e liga LED3
    if (tempoAtual - tempoAnterior >= 250) {
      digitalWrite(LED3, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 3;
    }
  }
  if (estadoAtual == 3) {  // Espera 500ms e liga LED4
    if (tempoAtual - tempoAnterior >= 500) {
      digitalWrite(LED4, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 4;
    }
  }
  if (estadoAtual == 4) {  // Espera 500ms e apaga todos os LEDs
    if (tempoAtual - tempoAnterior >= 500) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      tempoAnterior = tempoAtual;
      estadoAtual = 0;  // Reinicia a sequência
    }
  }
}