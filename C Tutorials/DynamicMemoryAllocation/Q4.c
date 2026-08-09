#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *) malloc (n * sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("Taking input from user:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Sum=0;
    for(int i=0;i<n;i++){
        Sum += arr[i];
    }
    float avg = Sum/n;
    printf("Sum = %d",Sum);
    printf("Average = %f",avg);
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}