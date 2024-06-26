int redPin = 10;      // Define o pino digital para o LED vermelho
int yellowPin = 9;    // Define o pino digital para o LED amarelo
int greenPin = 8;     // Define o pino digital para o LED verde
int buzzerPin = 7;    // Define o pino digital para o buzzer

void setup() {
  Serial.begin(9600);      // Inicia a comunicação serial com uma taxa de transmissão de 9600 bps
  pinMode(redPin, OUTPUT);     // Configura o pino do LED vermelho como saída
  pinMode(yellowPin, OUTPUT);  // Configura o pino do LED amarelo como saída
  pinMode(greenPin, OUTPUT);   // Configura o pino do LED verde como saída
  pinMode(buzzerPin, OUTPUT);  // Configura o pino do buzzer como saída
}

void loop() {
  int LDR = analogRead(A0);    // Lê o valor do sensor de luminosidade (LDR) conectado ao pino analógico A0
  int luz = map(LDR, 49, 969, 0, 100);  // Mapeia o valor lido do LDR para uma faixa de 0 a 100
  
  Serial.println(luz);    // Imprime o valor da luz no monitor serial
  
  if (luz <= 40) {    // Se a luz for igual ou inferior a 40%
    digitalWrite(greenPin, HIGH);   // Acende o LED verde
    digitalWrite(redPin, LOW);      // Desliga o LED vermelho
    digitalWrite(yellowPin, LOW);   // Desliga o LED amarelo
    noTone(buzzerPin);    // Desliga o buzzer (se estiver tocando)
  } else if (luz > 40 && luz <= 75) {    // Se a luz estiver entre 40 e 75%
    digitalWrite(greenPin, LOW);    // Desliga o LED verde
    digitalWrite(redPin, LOW);      // Desliga o LED vermelho
    digitalWrite(yellowPin, HIGH);  // Acende o LED amarelo
    noTone(buzzerPin);    // Desliga o buzzer (se estiver tocando)
  } else {    // Se a luz for maior que 75
    digitalWrite(greenPin, LOW);    // Desliga o LED verde
    digitalWrite(redPin, HIGH);     // Acende o LED vermelho
    digitalWrite(yellowPin, LOW);   // Desliga o LED amarelo
    tone(buzzerPin, 1000);    // Liga o buzzer com frequência de 1000 Hz
  }
  delay(250);
}

