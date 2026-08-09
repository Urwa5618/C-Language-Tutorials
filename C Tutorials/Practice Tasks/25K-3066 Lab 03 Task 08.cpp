#include <stdio.h>
int main(){
	int a, b, sum, subtract, multiply;
	float divide;
	// User inputs
	printf("Enter number a");
	scanf("%d", &a);
	printf("Enter number b");
	scanf("%d", &b);
	// Calcultaions
	sum = a + b;
	subtract = a - b;
	multiply = a * b;
	//division check
	if (b != 0){
	divide = a/b;
	}else{
		divide = 0;
	}
	printf("\nResults.\n");
	printf("The sum of %d and %d is %d\n", a, b, sum);
	printf("The difference of %d and %d is %d\n", a, b, subtract);
	printf("The product of %d and %d is %d\n", a, b, multiply);
	if (b!=0){
		printf("Division of %d by %d is %.2f\n", a, b, divide);
	}
	return 0;
}

