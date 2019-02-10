int analogpin=A3;
void setup()
{
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}
void loop()
{
  int val;
  val=analogRead(analogpin);
  Serial.println(val);
  if(val>=0 && val<=249)
  {
  analogWrite(3,255);
  analogWrite(5,255);
  analogWrite(6,255);
}
  else if(val>=250 && val<=499)
   {
  analogWrite(3,192);
  analogWrite(5,192);
  analogWrite(6,192);
}
  else if(val>=500 && val<=749)
   {
  analogWrite(3,128);
  analogWrite(5,128);
  analogWrite(6,128);
}
  else if(val>=750 && val<=999)
 {
  analogWrite(3,64);
  analogWrite(5,64);
  analogWrite(6,64);
}
  else
 {
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
}
}

