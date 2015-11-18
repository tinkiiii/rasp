#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
  int	pinRouge = 1;
  int	pinVert = 2;
  int	pinBleu = 3;

  wiringPiSet();
  pinMode(pinRouge, OUTPUT);
  pinMode(pinVert, OUTPUT);
  pinMode(pinBleu, OUTPUT);

  int loop = 1;
  while (loop)
    {
      char buff[10];
      ret = read(0, buff, 10);
      buff[ret - 1] = '\0';
      if (strcmp(buff, "rouge"))
	{
	  digitalWrite(vert, LOW);
	  digitalWrite(bleu, LOW);
	  digitalWrite(rouge, HIGH);
	  printf("rouge\n");
	}
      else if (strcmp(buff, "vert"))
	{
	  digitalWrite(rouge, LOW);
	  digitalWrite(bleu, LOW);
	  digitalWrite(vert, HIGH);
	  printf("vert\n");
	}
      else if (strcmp(buff, "bleu"))
	{
	  digitalWrite(vert, LOW);
	  digitalWrite(rouge, LOW);
	  digitalWrite(bleu, HIGH);
	  printf("bleu\n");
	}
      else if (strcmp(buff, "exit"))
	{
	  digitalWrite(vert, LOW);
	  digitalWrite(bleu, LOW);
	  digitalWrite(rouge, LOW);
	  loop = 0;
	  printf("exit\n");
	}
      else
	printf("Usage : rouge/vert/bleu/exit\n");
    }
  return (0);
}
