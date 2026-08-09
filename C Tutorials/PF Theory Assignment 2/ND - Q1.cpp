#include <stdio.h>

int main() {
    float matrix[3][3], transpose[3][3], cofactor[3][3], adjoint[3][3], inverse[3][3];
    float determinant = 0;
    int i, j, k, m, n;

    
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    
    printf("\nInput Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.2f", matrix[i][j]);
        printf("\n");
    }

    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            transpose[i][j] = matrix[j][i];

    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.2f", transpose[i][j]);
        printf("\n");
    }

    
    determinant = 0;
    for (i = 0; i < 3; i++) {
        determinant += matrix[0][i] *
                      (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] -
                       matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]);
    }

    printf("\nDeterminant of Matrix: %.2f\n", determinant);

    if (determinant == 0) {
        printf("\nMatrix is singular and has no inverse.\n");
        return 0;
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cofactor[i][j] =
                ((matrix[(j + 1) % 3][(i + 1) % 3] * matrix[(j + 2) % 3][(i + 2) % 3]) -
                 (matrix[(j + 1) % 3][(i + 2) % 3] * matrix[(j + 2) % 3][(i + 1) % 3]));
        }
    }

    printf("\nCofactor Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.2f", cofactor[i][j]);
        printf("\n");
    }

    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            adjoint[i][j] = cofactor[j][i];

    printf("\nAdjoint of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.2f", adjoint[i][j]);
        printf("\n");
    }

    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            inverse[i][j] = adjoint[i][j] / determinant;

    printf("\nInverse of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.4f", inverse[i][j]);
        printf("\n");
    }

    return 0;
}

