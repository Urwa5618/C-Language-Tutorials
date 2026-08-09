#include<stdio.h>
int main(){
    int arr[3];
    int product=1;
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    product*=arr[i];
    }
    printf("Product of elements are:%d\n",product);
    
    return 0;
}