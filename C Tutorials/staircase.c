#include <stdio.h>
int ways(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return ways(n-1) + ways(n-2) + ways(n-3);
}
int main (){
    int n;
    printf("Enter number of stairs:\n");
    scanf("%d",&n);
    int result = ways(n);
    printf("Total Ways = %d\n",result);

    return 0;
}