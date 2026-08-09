#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr,n,Sum=0;
    scanf("%d",&n);
    ptr = (int*) malloc (n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Number input are:\n");
    for(int i=0;i<n;i++){
        printf("%d",ptr[i]);
        Sum+=ptr[i];
    }
    printf("\nSum is:%d",Sum);
    free(ptr);
    return 0;
}