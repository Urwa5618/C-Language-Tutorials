#include<stdio.h>
int add(int p,int q){
	return p+q;
}
int main(){
	int a;
	printf("Enter 1st number:\n");
	scanf("%d",&a);
	int b;
	printf("Enter 2nd number:\n");
	scanf("%d",&b);
	int Sum = add(a,b);
	printf("Sum is : %d\n",Sum);
	return 0;
}
