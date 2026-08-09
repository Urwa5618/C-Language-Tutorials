#include <stdio.h>
int Factorial(int n);
int main(){
	int n;
	scanf("%d",&n);
	int fact = Factorial(n);
	printf("Factorial is:%d",fact);
	return 0;
}

int Factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	int Ans = n * Factorial(n-1);
	return Ans;
}
