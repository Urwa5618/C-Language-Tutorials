#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while(n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}
int main() {
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
    printf("Reverse = %d", reverse(n));
}

