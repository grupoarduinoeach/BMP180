

int valor_limite = 300;                 //Valor maximo que pode ser recebido pelo sensor de gás
int ledPin = 12;                        //Saída do arduino a qual o buzzer será ligado

void setup() {
  Serial.begin(9600);                   // Inicializa a comunicação serial
  pinMode(ledPin, OUTPUT);                  // configura o pino 12 como saída
}

void loop() {
  Serial.println(analogRead(A0));       // Envia o valor de entrada do componente ligado à entrada A0 do arduino (neste caso o sensor de gás)

  if (analogRead(A0) > valor_limite) {  //Verifica se o o valor enviado pelo sensor de gás excede o limite estabelecido pelor valor_limite
    digitalWrite(ledPin, HIGH);          // Liga o buzzer conectado na saida 12 do arduino (para leds funciona da mesma forma)
  }
  else {                              
    digitalWrite(ledPin, LOW);           //Desliga o buzzer conectado na saida 12 do arduino (para leds funciona da mesma forma)
  }
  delay (300);                          // Espera 300ms para realizar a proxima medida
}

