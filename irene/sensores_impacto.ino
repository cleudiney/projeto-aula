  /*    sensores de impacto

          
                 sif 0001
                 ******

 0010 sief  **            **  sidf            1000

 0011 siet  **            ** sidt             1100
                  *******
                   sit
                   0100

  */

int sensores_impacto(int op)
{
//Pino ligado ao push-button
int buttonPin = A0;
//Definindo a saida do pino para maior clareza ( LED Verde)
int led2 = A2;
//Variavel para fazer a checagem
int buttonState;

void setup()
{
  
  // Define o pino do botao como entrada
  pinMode(buttonPin, INPUT);
  // Define o pino do Led Verde como Saida
  pinMode(led2, OUTPUT);
}

void loop() 
{
  // Verifica se o estado do botao foi alterado
  buttonState = digitalRead(buttonPin);
  //Se o botao foi apertado
  if (buttonState == LOW) 
  {
   // Liga o LED    
    digitalWrite(led2, HIGH);  
  } 
  else 
  {
    // Apaga o LED
    digitalWrite(led2, LOW); 
  }
}

}