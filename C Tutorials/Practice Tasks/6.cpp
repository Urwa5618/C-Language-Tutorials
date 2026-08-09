#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        while (num != 0) {
            remainder = num % 10;         
            reversed = reversed * 10 + remainder; 
            num /= 10;                     
        }
        printf("Reversed number: %d\n", reversed);
    }
	return 0;
}
