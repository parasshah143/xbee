void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.println("Hello");
  delay(1000);
  Serial.println("World");
  delay(1000);
}
