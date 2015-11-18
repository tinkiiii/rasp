#include <wiringPi.h>

int main()
{
  wiringPiSet();
  //wiringPiGpio();

  pinMode(0, OUTPUT);
  //pinMode(0, INPUT);
  //pinMode(0, PWM_OUTPUT);

  for(;;)
    {
      digitalWrite(0, HIGH);
      //pwmWrite(0, 1024);
      //digitalRead(0);
      delay(500);
      digitalWrite(0, LOW);
      delay(500);
    }
  return (0);
}

//-L/dossier -lwiringPi
