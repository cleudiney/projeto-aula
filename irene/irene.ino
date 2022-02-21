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
int sensores_impacto(int op);
void verifica_caminho();

//declaração dos sensores de colisão

int SIF   = A0;
int SIDF  = A1;
int SIEF  = A2;
int SIT   = A3;
int SIDT  = A4;
int SIET  = A5;

//declaração dos botões


int ligarobo = 0;
bool estadorobo = 0;

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
const int DISTANCIA_SEGURA = 15; // [cm]
const int PAUSA = 100; // [ms]



void setup() 
{


 // configura os pinos do sensor ultrassonico
  pinMode(PINO_SENSOR_ECHO, INPUT); // entrada
  pinMode(SIF, INPUT); // entrada
  pinMode(SIDF, INPUT); // entrada
  pinMode(SIEF, INPUT); // entrada
  pinMode(SIT, INPUT); // entrada
  pinMode(SIDT, INPUT); // entrada
  pinMode(SIET, INPUT); // entrada

  pinMode(PINO_SENSOR_TRIGGER, OUTPUT); // saida
  digitalWrite(PINO_SENSOR_TRIGGER, LOW); // por padrao em nivel baixo (sem sinal)

  // configura os pinos do driver de motor
  pinMode(PIN_MOTOR_IN1, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN2, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN3, OUTPUT); // saida
  pinMode(PIN_MOTOR_IN4, OUTPUT); // saida
  parar(); // robo parado por padrao


}

void loop() 
{
  // le a distancia
  int distancia = ler_distancia();

  /*    sensores de impacto

          
                 sif 0001
                 ******

 0010 sief  **            **  sidf            1000

 0011 siet  **            ** sidt             1001
                  *******
                   sit
                   0100

  */
  SIF = sensores_impacto(1);
  SIEF = sensores_impacto(2);
  SIET = sensores_impacto(3);
  SIDT = sensores_impacto(9);  
  SIDF = sensores_impacto(8);  
  SIT = sensores_impacto(4);

  
  // verifica se ha um obstaculo na frente
  verifica_caminho();


}