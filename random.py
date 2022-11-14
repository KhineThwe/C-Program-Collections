#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main ()
{
  srand (time (NULL));
  for (int i = 0; i < 10; i++)
    {
      int randNumber = rand () % 100;
      if (randNumber < 1000)
	{
	  randNumber = randNumber + 1000;
	}
      printf ("random number %d\n", randNumber);
    }
  return 0;
}
