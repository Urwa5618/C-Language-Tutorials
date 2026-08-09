#include<stdio.h>
#include<math.h>
int main(){
	double P,r,n,A,t;
	printf("Enter P: ,Enter r: ,Enter n: , Enter t: ");
	scanf("%lf %lf %lf %lf",&P,&r,&n,&t);
	A = P * pow((1+r/n), n * t);
	printf("Future value of investment: %.2lf\n", A);
	return 0;
}
