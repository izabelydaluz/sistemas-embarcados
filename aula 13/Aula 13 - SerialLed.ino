#define led1 8  // definindo o pino 8 como led 1
#define led2 9
#define led3 10
#define led4 11

void setup() {
  Serial.begin(9600);     // velocidade de comunicação
  pinMode(led1, OUTPUT);  // estou dizendo que o led 1 irá ligar
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {

  if (Serial.available() == 1) {
    char i = Serial.read();
    Serial.println(i);
    if (i == '1');
    {
      digitalWrite(led1, HIGH);
    }

    if (i == '2');
    {
      digitalWrite(led2, HIGH);
    }

    if (i == '3');
    {
      digitalWrite(led3, HIGH);
    }

    if (i == '4');
    {
      digitalWrite(led4, HIGH);
    }
  }
}
