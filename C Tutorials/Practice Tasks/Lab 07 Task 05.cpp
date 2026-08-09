#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            count++;
    }
    printf("Number of whitespace characters: %d\n", count);
    return 0;
}

