#include <stdio.h>
int main (){
    int arr1[3],arr2[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<3;i++){
        arr2[i]=arr1[i];
    }
    printf("Elemnets stored in arr1:\n");
    for(int i=0;i<3;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nElements copied in arr2:\n");
    for(int i=0;i<3;i++){
        printf("%d\t",arr2[i]);
    }
    
    return 0;
}