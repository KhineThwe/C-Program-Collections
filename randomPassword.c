#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main ()
{
  srand (time (NULL));
  int password[10];
  int randNumber;
  int count=0;
  for (int i = 0; i < 100; i++)
    {
      randNumber = rand () % 90;
    if (randNumber >=64 && randNumber<=90)
	{
	  count++;
	  password[count] = randNumber;
	  printf ("random number %c\n", randNumber);
	  if(count == 10){
	      break;
	  }
	}
    }
    printf("Our Generated Password: ");
    for(int i=0;i<=10;i++){
      printf("%c",password[i]);
    }
  return 0;
}
