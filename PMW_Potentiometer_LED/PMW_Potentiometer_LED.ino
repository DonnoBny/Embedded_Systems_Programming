int led = 25;

void setup()
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop()
{
  float pot = analogRead(35);
  float volt = pot*0.000805861;
  float angulo = pot*0.065934066;
  float porcentaje = angulo * 0.37037037;
  int brillo = porcentaje * 2.55;
  
  Serial.print("Angulo del Potenciometro");
  Serial.print(angulo);
  Serial.print(".\n");
  Serial.print("Voltaje:");
  Serial.print(volt);
  Serial.print(".\n");
  Serial.print("Porcentaje:");
  Serial.print(porcentaje);
  Serial.print(".\n");
  Serial.print(brillo);
  
  analogWrite(led,brillo);
   
  delay(500);
}