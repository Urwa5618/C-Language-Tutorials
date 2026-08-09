#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    int n;
    scanf("%d",&n);
    if (n % 2==0){
        printf("N should be an odd number!");
        return 1;
    }
    int matrix[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum =0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                sum+=matrix[i][j];
            }
        }
    }
    printf("Sum is:%d",sum);
    return 0;
}