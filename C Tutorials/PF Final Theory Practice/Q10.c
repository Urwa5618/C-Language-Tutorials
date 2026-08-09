#include <stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main (){
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d %d ",&a,&b);
    printf("Before Swap: x = %d,y = %d\n",a,b);
    swap(&a,&b);
    printf("After Swap: x = %d,y = %d",a,b);
    return 0;
}