#include <stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int sumEven=0,sumOdd=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            sumEven+=arr[i];
        }else sumOdd+=arr[i];
    }
    printf("Sum of Even indexes elements are: %d\n",sumEven);
    printf("Sum of Odd indexes elements are: %d",sumOdd);
    return 0;
}