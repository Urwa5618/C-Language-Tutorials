#include <stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int max=arr[0],min=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}