#include <stdio.h>
#include <stdlib.h>
int main () {
    char *ptr = (char *) malloc(15 * sizeof(char));
    if(ptr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("Enter your string:\n");
    fgets(ptr,15,stdin);
    printf("You Entered:%s",ptr);
    free(ptr);
    return 0;
}