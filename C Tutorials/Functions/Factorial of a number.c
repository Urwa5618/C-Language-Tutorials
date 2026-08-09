#include<stdio.h>
factorial(int n);
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
factorial(int n){
	int fact = 1,i;
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	printf("factorial of %d is: %d",n,fact);
}
