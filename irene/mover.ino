void mover()
{

  digitalWrite(PIN_MOTOR_IN1, HIGH);
  digitalWrite(PIN_MOTOR_IN2, LOW);
  digitalWrite(PIN_MOTOR_IN3, HIGH);
  digitalWrite(PIN_MOTOR_IN4, LOW);
  distancia=ler_distancia();
  verifica_caminho();

}
