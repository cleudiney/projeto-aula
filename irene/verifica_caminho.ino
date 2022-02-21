void verifica_caminho()
{

  if(distancia < DISTANCIA_SEGURA)
  {
    // para o robo
    parar();
    delay(500); // pausa para o proximo movimento
    olhalados();
    // move o robo para tras
    mover_tras();
    //vira_direita();

    // para o robo apos um curto intervalo
    delay(1000);
    parar();

    // escolhe um dos lados para girar
    bool par = (millis() % 2 == 0) ? true : false;
    if(par)
    {
      // gira o motor 1 para a frente
      digitalWrite(PIN_MOTOR_IN1, HIGH);
      digitalWrite(PIN_MOTOR_IN2, LOW);
    } 
    else 
    {
      // gira o motor 2 para a frente
      digitalWrite(PIN_MOTOR_IN3, HIGH);
      digitalWrite(PIN_MOTOR_IN4, LOW);
    }

    // para o robo apos um curto intervalo
    delay(500);
    parar();
  } 
  else 
  { // senao
    // move o robo para a frente
    mover_frente();
  }

  // pausa para a proxima leitura
  delay(PAUSA);




}