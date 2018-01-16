#include <stdio.h>
#include <stdlib.h>
void omega()
{

	for(int i=0 ; i<9 ; i++)
	{
		printf("Hello Omega\n");
	}

}

int salary()
{
  int s;
  printf("Your Salary : ");
  scanf("%d",&s);
  printf("%d Baht\n",s);
  if (s >= 30000)
  {
    printf("Good\n");
  }
  else
  {
    printf("Bad\n");
  }
  return s;

}

int main(void) {
  printf("Your Salary is %d\n",salary());
  omega();
  printf("I love you");

}
