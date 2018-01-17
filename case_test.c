#include <stdio.h>
int main()
{
	int x;
	printf("x = ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Hello");
		break;
		case 2:
		printf("Good Morning");
		break;
		case 3:
		printf("Good Afternoon");
		break;
		case 4:
		printf("Good Evening");
		break;
		default:
		printf("Good Night");
		break;
	}
	return 0;
}
