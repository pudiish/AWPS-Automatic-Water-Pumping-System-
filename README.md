Hey! My name is Ishwar. I am here with a new video Automatic Water Pumping System for plants. This is an Arduino based projects and very cheap to make.
As we all know, Nowadays everyone is busy doing their work they go to office, duty, school etc. they have no time to water plants so. for them I have a solution you can make this Automatic Water Pumping System for plants which is very easy to make you can make this within 10 min.....

Working - if the plants get dry the system detect it and starts the pump automatically. turns off if the plants get sufficient water....






HERE is the code ------

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


-----------------------------------------------------------------------------
use your arduino compiler to program your board

THANK YOU for Watching our video
I will be uploading more arduino projects in future
don't forget to hit the like button and subscribe our channel...
