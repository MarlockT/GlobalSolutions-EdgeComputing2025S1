int distancia = 0;
int verde = 6;
int azul = 5;
int vermelho = 4;

long readDistanciaUltrassonica (int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
          
}

void loop()
{
  distancia = 0.01723 * readDistanciaUltrassonica (10,11);
    
  if (distancia >= 200)
  {
    digitalWrite(vermelho, HIGH);
    digitalWrite(azul, LOW);
    digitalWrite(verde, LOW);
    delay(2000);
  }
  if (distancia > 100 && distancia < 200)
  {
    digitalWrite(vermelho, LOW);
    digitalWrite(azul, HIGH);
    digitalWrite(verde, LOW);
    delay(2000);
  }
    
  if (distancia <= 100)
  {
    digitalWrite(vermelho, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verde, HIGH);
    delay(2000);
  }
}
