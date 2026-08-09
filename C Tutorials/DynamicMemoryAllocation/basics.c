#include <stdio.h>
#include <stdlib.h>
int main () {
    int *ptr;
    ptr = (int*) malloc (5 * sizeof(int));
    for (int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    int Sum = 0;
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
        Sum+=ptr[i];
    }
    printf("Sum is:%d",Sum);
    return 0;
}