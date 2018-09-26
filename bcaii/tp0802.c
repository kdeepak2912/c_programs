#include "stdio.h"
int main()
{
  int i;
  goto LOOP;
  for (i = 0 ; i < 10 ; i++)
  {
     printf("BCA-II-A\n");
     LOOP:
      break;
  }
  return 0;
}

