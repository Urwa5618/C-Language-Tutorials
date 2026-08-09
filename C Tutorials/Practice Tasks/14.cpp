#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d * 2 = %d\n", num, num << 1);
    printf("%d * 4 = %d\n", num, num << 2);
    printf("%d * 8 = %d\n", num, num << 3);
    return 0;
}

