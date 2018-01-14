#include <stdio.h>
int main(){
	float radius , area;
	const float Pi = 3.14;
	printf("Insert Radius >> ");
	scanf("%f",&radius);
	area = Pi*radius*radius;
	printf("Circle Area = %.2f",area);
	return 0;
}

