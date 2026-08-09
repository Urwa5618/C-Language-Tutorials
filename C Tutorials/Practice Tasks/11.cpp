#include<stdio.h>
#include<math.h>
int main(){
	double H,theta,L;
	printf("Enter Height, Enter angle of sun's elevation(in radians)");
	scanf("%lf %lf",&H,&theta);
	L = H / tan(theta);
	printf("\nLength of shadow region: %.2lf\n", L);
	return 0;
}
