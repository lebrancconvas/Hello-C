#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
  int a , b , c;
  for (a=1;a<=12;a++)
  {
    printf("=========\n");
    for (b=1;b<=12;b++)
    {
      printf("%d x %d = %d\n",a,b,a*b);
      printf("-----\n");
    }
  }
  
}
