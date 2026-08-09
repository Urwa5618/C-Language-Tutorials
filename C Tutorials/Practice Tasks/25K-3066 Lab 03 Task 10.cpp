#include <stdio.h>
int main(){
	float a;
	printf("enter value of a");
	scanf("%f", &a);
	printf("This float number is %.2f\n", a);
	printf("before setting precision number is: %.2f\n",a);
	printf("after setting precision number is: %.6f\n",a);
	
	return 0;
	
}
