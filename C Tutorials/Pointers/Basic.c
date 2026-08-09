#include <stdio.h>

int main() {
    int a = 25;
    int *x = &a; // int *-----> int ka store address
	int **y = &x; // int** ----> int* ka address store karta h
	printf("%d\n",a); //%p se address print hota h
    printf("%d\n",*x);
	printf("%d\n",**y);
	return 0;
}

