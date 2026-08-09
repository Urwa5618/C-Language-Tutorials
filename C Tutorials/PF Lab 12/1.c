#include <stdio.h>
#include <stdlib.h>
int main() {
    int m, n, p;
    printf("Enter dimensions m n p: ");
    scanf("%d %d %d", &m, &n, &p);
    
    int **A = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++)
        A[i] = (int*)malloc(n * sizeof(int));

    int **B = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
        B[i] = (int*)malloc(p * sizeof(int));
    
    int **C = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++)
        C[i] = (int*)malloc(p * sizeof(int));

    printf("Enter matrix A (%dx%d):\n", m, n);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B (%dx%d):\n", n, p);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Product matrix C (%dx%d):\n", m, p);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    
    for(int i = 0; i < m; i++){ 
        free(A[i]);
    }
    free(A);
    for(int i = 0; i < n; i++){
         free(B[i]);
    }
    free(B);
    for(int i = 0; i < m; i++){ 
        free(C[i]);
    }
    free(C);
    return 0;
}
