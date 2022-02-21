void mover_frente(void)
{

  if (POSX<=100)
  {
    /* code */
      for(pos = POSX; pos < 101; pos++)
    {
      s.write(pos);
      delay(15);
    }
  }
  else
  {
        for(pos = POSX; pos >= 85; pos--)
  {
    s.write(pos);
    delay(15);
  }
  }
  POSX=pos;
  digitalWrite(PIN_MOTOR_IN1, HIGH);
  digitalWrite(PIN_MOTOR_IN2, LOW);
  digitalWrite(PIN_MOTOR_IN3, HIGH);
  digitalWrite(PIN_MOTOR_IN4, LOW);
  ler_distancia();
  verifica_caminho();

}