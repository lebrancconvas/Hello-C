#include "stdio.h"
#include "stdlib.h"

struct member
{
  int id;
  int age;
  int salary;
};

int main(void) {
  struct member mem[10];
  for(int i=0 ; i<10 ; i++)
  {
    mem[i].id = i+1;
    if(i<5)
    {
      mem[i].age = 20;
      mem[i].salary = 25000;
    }
    else
    {
      mem[i].age = 30;
      mem[i].salary = 40000;
    }
    printf("id : %d\nage : %d\nsalary : %d\n",mem[i].id,mem[i].age,mem[i].salary);
    printf("--------------------\n");
  }
  return 0;
}
