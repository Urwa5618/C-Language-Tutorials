#include<stdio.h>
int main(){
    int x,y,Sum,Difference,Product;
    float division;
    printf("Enter value of x , Enter value of y");
    scanf("%d %d", &x, &y);
    Sum = x+y;
    Difference = x-y;
    Product = x*y;
    If(y!=0);
    {
        division =x/y;
    }else{
        printf("Error");
    }
    return 0;
}
