//declaração das funções

void motomove();
void mover();
void sensores();
void calc_distancia();
void olha_lados();
void decide_andar();


//declaração dos sensores 

int toquedireita = 2;
int toqueesquerda = 3;
int toquefrente = 4;
int toquetras = 5;

//declaração dos botões


int ligarobo = 6;
int led2 = 5;
int bot1 = 2;
int bot2 = 3;

//declaração dos motores

//declaração das configurações globais






const int motorPin = 2;
const int buttonPin = 7;
int buttonState = 0;

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) 
  {

  }
  else 
  {

  }
}