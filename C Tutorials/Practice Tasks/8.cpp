#include<stdio.h>
#include<math.h>
int main(){
	float M,I,S;
	printf("Enter the I, Enter the S");
	scanf("%f %f", &I, &S);
	M=log10(I/S);
	printf("The magnitude of earthquake is %f", M);
	return 0;
}
