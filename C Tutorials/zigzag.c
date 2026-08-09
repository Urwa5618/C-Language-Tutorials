#include <stdio.h>
void zigzag(int arr[],int n, int i, int flag){
    if(i==n){
        return;
    }
    if(flag==0){
        printf("%d",arr[i]);
    }else printf("%d",arr[i]);

    zigzag(arr,n,i+1,!flag);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    printf("ZigZag Output: ");
    zigzag(arr,n,0,0);
    return 0;
}