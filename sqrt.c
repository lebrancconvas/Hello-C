#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(void) {
  float sqrt;
  float fl,lower,upper;
  printf("Enter the Number : ");
  scanf("%f",&fl);
  lower = 0;
  upper = fl;
  sqrt = (lower + upper)/2;
  while(fabs((sqrt*sqrt)-fl) > 0.0001)
  {
    if(sqrt*sqrt < fl)
    {
      lower = sqrt;
    }
    else
    {
      upper = sqrt;
    }
    sqrt = (lower + upper)/2;
  }
  printf("Sqrt of %.2f is equal to %.3f",fl,sqrt);
  return 0;
}
