#include <stdio.h>
int main(){
	int a,b,Max;
	printf("Enter value of a, Enter value of b");
	scanf("%d %d",&a, &b);
	Max= (a>b)? a : b;
	printf("the greater is %d", Max);
	return 0;
}
