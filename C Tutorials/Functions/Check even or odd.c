#include<stdio.h>
int checkevenodd(int a);
int main(){
	int a;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	int b = checkevenodd(a);
	return 0;
}
int checkevenodd(int a){
	if(a%2==0){
		printf("Even\n");
	}else printf("Odd");
	return a;
}
