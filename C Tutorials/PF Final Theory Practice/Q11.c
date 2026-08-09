#include <stdio.h>
int main (){
    int arr[5]={10,20,30,40,50};
    int *p = arr;
    printf("Array Values:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",*(p+i));
    }
    return 0;
}