#include <stdio.h>
#include <stdlib.h>
int main (){
    int *arr;
    int n,new_n,i;
    printf("Enter initial number of elements:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){printf("Memeory Allocation Failed.\n");return 1;}
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter new number of elements:\n");
    scanf("%d",&new_n);
    arr = (int*)realloc(arr,new_n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed.\n");
        return 1;
    }
    for ( i = 0; i < new_n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < new_n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}