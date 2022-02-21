// Mover o robo para tras
void mover_tras(void)
{
  if (SIT==0 and SIET==0 and SIDT==0)
  {
    /* code */
  
  digitalWrite(PIN_MOTOR_IN1, LOW);
  digitalWrite(PIN_MOTOR_IN2, HIGH);
  digitalWrite(PIN_MOTOR_IN3, LOW);
  digitalWrite(PIN_MOTOR_IN4, HIGH);

  }
  else
  {

    return;

  }
}