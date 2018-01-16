#include <stdio.h>
int main(){
	int a , b , c;
	scanf("a : %d\n",&a);
	scanf("b : %d",&b);
	c = a + b;
	if (c >= 20){
		printf("Hello %d",c);
	}
	else{
		printf("World %d",c);
	}
	return 0;
}
