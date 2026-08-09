#include<stdio.h>
int main (){
    int m1[2][2];
    int m2[2][2];
    int r[2][2];
    printf("Enter values of m1:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter values of m2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The resultant matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            r[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}