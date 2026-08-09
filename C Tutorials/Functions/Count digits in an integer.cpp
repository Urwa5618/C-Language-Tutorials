#include <stdio.h>
int countdigits(int n) {
    int count = 0;
    if(n == 0) return 1;   
    while(n != 0) {
        n = n / 10;
        count++;
    }
    printf("Count is: %d",count);
    return count;
}
int main() {
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
    countdigits(n);
}

