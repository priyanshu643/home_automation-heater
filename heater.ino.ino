int temperature_sensor = A0;
char relay_pin = 13;
void setup ()
{
  pinMode (temperature_sensor,INPUT);
  Serial.begin (9600);
  pinMode (relay_pin,OUTPUT);
}
void loop ()
{
  int nothing = analogRead (temperature_sensor);
  float X= nothing*(5.0/1023.0);
  float Temperature_by_priyanshu=X*100;
  Serial.print ("Temperature: ");
  Serial.print (Temperature_by_priyanshu);
  Serial.print ("°C");
  delay (5000);
  if (Temperature_by_priyanshu >= 18)
  {
    digitalWrite (relay_pin,HIGH);
  }
  else 
  {
    digitalWrite (relay_pin,LOW);
  }
}
