#include <stdio.h>
int main() {
 	char str[100];
    printf("Enter a string (with numbers): ");
    scanf("%[^0-9]", str);
    printf("String without numbers: %s\n", str);
 	return 0;
 }
 
