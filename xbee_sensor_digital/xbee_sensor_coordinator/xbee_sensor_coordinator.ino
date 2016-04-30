int readValue =0;
void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
if (Serial.available() >21)
  {
   if (Serial.read() == 0x7E)
    {
     for (int i=0; i<19; i++)
      {
       byte discard = Serial.read();
      }
      readValue = Serial.read();
      Serial.print("Paras Shah: ");
      if (readValue == 0)
       {
        Serial.println("No Touch");
       }
        else if (readValue == 16)
          {
            Serial.println("Touch");
          }
       }
   }
}
