#include "garbage.h"
void setup()
{
Serial.begin(9600);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
delay(1000);
}
void loop()
{
int duration,distance;
digitalWrite(trigpin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin,LOW);
duration = pulseIn(echopin,HIGH);
distance = (duration/2)/29.1;
Serial.println("cm:");
Serial.println(distance);
if( (distance>0)&&(distance<=20) )
{
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
}else
if( (temperature>20)&&(temperature<=40) )
{
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
}else
if( (temperature>40)&&(temperature<=60) )
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
}else
if( (temperature>60)&&(temperature<=80) )
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
digitalWrite(led5, LOW);
}else
if( (temperature>80)&&(temperature<=100) )
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
}
}
