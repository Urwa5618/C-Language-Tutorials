#include <stdio.h>
char* recursiveConcat(char* dest, char* src) {
    if (*dest != '\0') {
        recursiveConcat(dest + 1, src);
        return dest;  
    }
    if (*src == '\0') {
        *dest = '\0';
        return dest;   
    }
    *dest = *src;                
    recursiveConcat(dest + 1, src + 1); 
    return dest;
}

int main() {
    char dest[100] = "Hello ";
    char src[] = "World";
    recursiveConcat(dest, src);
    printf("Concatenated: %s\n", dest);
    return 0;
}