#include <stdio.h>
int powerlog(int a, int b){
    if(b==0){return 1;}
    return a * powerlog(a,b-1);
}
int main () {
    int a;
    printf("Enter the base:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the base:\n");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to the power %d is: %d",a,b,p);
    return 0;
}