#include <stdio.h>
int main (){
    int arr[3];
    int Sum=0;
    for(int i=0;i<3;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
        Sum+=arr[i];
    }
    printf("Sum of elements are:%d\n",Sum);
    return 0;
}