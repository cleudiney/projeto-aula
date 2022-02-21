int ler_distancia(void)
{
  // realiza o pulso de 10 microsegundos no trigger do sensor
  digitalWrite(PINO_SENSOR_TRIGGER,HIGH);
  delayMicroseconds(10);
  digitalWrite(PINO_SENSOR_TRIGGER,LOW);

  // mede o pulso em microsegundos retornado para o echo do sensor
  // e converte o tempo para distancia ao dividir por 58
  return pulseIn(PINO_SENSOR_ECHO, HIGH) / 58; // [cm]
}