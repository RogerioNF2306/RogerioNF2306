const byte LED = A7; // Declaração da variável que armazena o pino referente ao LED
int Leitura = 0;
int LDR = A0;
void setup(void) {  
  Serial.begin(115200);  // Inicia a comunicação Serial
  pinMode(LED, OUTPUT); // Declaro que o pino do Led será do tipo Output
  pinMode (LDR, INPUT);
}

void loop(void) {
 
  int sensorValue = analogRead(A0); // Declaro a variável que armazena o pino referente aos dados do LDR
  Leitura = analogRead(A0);
  Serial.println (Leitura);
  if(sensorValue <=15){  // Teste para identificar se o valor do LDR é igual a zero, se for ele executa as 2 linhas abaixo
    Serial.println("Lanterna no sensor"); // Gera um log na serial informando que a lanterna esta iluminando o sensor
    digitalWrite(LED, HIGH);  // Acende o(s) LED(s)
  }else {  // Caso o valor do LDR não seja igual a zero significa que não tem uma lanterna iluminando o mesmo e ele executa as 2 linhas abaixo
    Serial.println("Sensor de boa"); // Gera um Log na serial informando que o sensor esta de boa, sem nenhuma lampada sobre o mesmo
    digitalWrite(LED, LOW); // Apaga o(s) LED(s)
  }
  delay(500); // Aguarda meio segundo
}
