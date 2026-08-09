#include <stdio.h>
#include <stdlib.h>
int main (){
    // int r,c;
    // scanf("%d %d",&r,&c);
    int **matrix = (int**) malloc(3*sizeof(int*));
    for(int i=0;i<3;i++){
        matrix[i] = (int*) malloc(3*sizeof(int));
    }
    printf("Enter the values:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Values are:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t\n",matrix[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}