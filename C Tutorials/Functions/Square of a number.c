#include<stdio.h>
#include<math.h>
int square(int a);
int main(){
	int a;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	square(a);
	return 0;
}
int square(int a){
	int b = a * a;
	printf("The Square of a number is: %d\n",b);
	return b;
}
