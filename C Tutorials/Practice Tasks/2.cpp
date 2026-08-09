#include<stdio.h>
int main(){
	int n, mul;
	printf("enter a: ");
	scanf("%d", &n);
	for(int a=1;a<=10;a++){
	mul = a*n;
	printf("\n%d x %d = %d", n, a, mul);
}
	return 0;
}