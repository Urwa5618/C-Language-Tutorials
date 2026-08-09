#include <stdio.h>
int main (){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements are:\n");
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}