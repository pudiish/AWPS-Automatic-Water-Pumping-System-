int WATERPUMP=13;
int sensor=8;
int val;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}
void loop()
{
  val=digitalRead(8);
  if(val==LOW)
{
digitalWrite(13,HIGH);
}
else
{
digitalWrite(13,LOW);
}
delay(400);
}