#include <stdio.h>
void swap(int* a,int* b);
int main() {
    int x = 100;
    int y = -21;
    swap(&x,&y);
	printf("The value of x is %d\n",x);
    printf("The value of y is %d",y);
	return 0;
}
void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
