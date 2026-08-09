#include <stdio.h>
int main(){
    int m1[2][2][2]={
        {{10,18},{35,40}},
        {{22,48},{24,65}}
        };
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("%d\t",m1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
