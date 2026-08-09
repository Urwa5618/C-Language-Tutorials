#include <stdio.h>
int swap(int x,int y);
int main() {
    int x = 100;
    int y = -21;
    swap(x,y);
	printf("The value of x is %d\n",x);
    printf("The value of y is %d",y);
	return 0;
}
int swap(int x,int y){
	int temp = x;
	x = y;
	y = temp;
	return;
}
// Not Possible without pointers
//Logic same h but possible nh
