#include <stdio.h>
int pow(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int power = pow(a,b);
	printf("%d raised to the power %d is:%d",a,b,power);
	return 0;
}
int pow(int a,int b){
	if(b==0){
		return 1;
	}
	return a * pow(a,b-1);
}
