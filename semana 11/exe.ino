#define pin_led1 8  // definindo o pino 8 como led 1
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11 

void setup() {
  Serial.begin(9600); // velocidade de comunicação
  pinMode(pin_led1, OUTPUT); // estou dizendo que o led 1 iré ligar
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
}

void loop() {
if (Serial. available() == 1) {
   char i = Serial.read();
   Serial.println(i); 
  if ( i == '1');{
     digitalWrite(pin_led1, HIGH);
    }

  if ( i == '2'); {
      digitalWrite(pin_led2, HIGH);
    }

  if ( i == '3');  {
      digitalWrite(pin_led3, HIGH);
    }
   
  if ( i == '4'); {
      digitalWrite(pin_led4, HIGH);
    }
  }
}  
 