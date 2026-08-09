#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    printf("Enter string: ");
    fgets(s,50,stdin);
    char *a = s;
    char *b = s + strlen(s) - 1;
    while(a < b) {
        char temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
    printf("Reversed: %s", s);
    return 0;
}
