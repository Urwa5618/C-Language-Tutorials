#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed!\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted array in ascending order:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}