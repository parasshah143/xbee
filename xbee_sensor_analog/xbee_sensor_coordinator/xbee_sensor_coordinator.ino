float ldr;
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
       byte discardByte = Serial.read();
      }
      int analogMSB = Serial.read();
      int analogLSB = Serial.read();
      int analogReading = analogLSB + (analogMSB * 256);
      ldr = analogReading * 1023.0 * 1.23;
      ldr = ldr - 0.5;
      ldr = ldr * 0.01;
      ldr = ldr * 9/5 + 32;
      unsigned long int data = ldr;
      Serial.print(data);
      Serial.println(" light value ");
      delay(200);
    }
  }
}
