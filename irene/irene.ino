//declaração das bibliotecas
#include <Ultrasonic.h>



//declaração das funções

void motomove();
void mover();
void sensores();
void calc_distancia();
void olha_lados();
void decide_andar();
int ler_distancia(void);
void mover_frente(void);
void mover_tras(void);
void parar(void);


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





//declaração  das constantes

const int PIN_MOTOR_IN1 = 2;
const int PIN_MOTOR_IN2 = 3;
const int PIN_MOTOR_IN3 = 4;
const int PIN_MOTOR_IN4 = 5;


/* Definições dos portas para leitura do sensor ultrasonico */
const int PINO_SENSOR_ECHO = 13;
const int PINO_SENSOR_TRIGGER = 12;

/* Definições de operação do sensor ultrasônico */
// declaracao das constantes auxiliares para controlar os motores
const int DISTANCIA_SEGURA = 25; // [cm]
const int PAUSA = 100; // [ms]



void setup() 
{
 // configura os pinos do sensor ultrassonico
  pinMode(PINO_SENSOR_ECHO, INPUT); // entrada
  pinMode(PINO_SENSOR_TRIGGER, OUTPUT); // saida
  digitalWrite(PINO_SENSOR_TRIGGER, LOW); // por padrao em nivel baixo (sem sinal)

  // configura os pinos do driver de motor
  pinMode(PIN_MOTOR_IN1, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN2, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN3, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN4, OUTPUT); // saida
  parar(); // robo parado por padrao
}

void loop() {
  // le a distancia
  int distancia = ler_distancia();

  // verifica se ha um obstaculo na frente
  if(distancia < DISTANCIA_SEGURA){
    // para o robo
    parar();
    delay(500); // pausa para o proximo movimento

    // move o robo para tras
    mover_tras();

    // para o robo apos um curto intervalo
    delay(1000);
    parar();

    // escolhe um dos lados para girar
    bool par = (millis() % 2 == 0) ? true : false;
    if(par){
      // gira o motor 1 para a frente
      digitalWrite(PIN_MOTOR_IN1, HIGH);
      digitalWrite(PIN_MOTOR_IN2, LOW);
    } else {
      // gira o motor 2 para a frente
      digitalWrite(PIN_MOTOR_IN3, HIGH);
      digitalWrite(PIN_MOTOR_IN4, LOW);
    }

    // para o robo apos um curto intervalo
    delay(500);
    parar();
  } else { // senao
    // move o robo para a frente
    mover_frente();
  }

  // pausa para a proxima leitura
  delay(PAUSA);
}