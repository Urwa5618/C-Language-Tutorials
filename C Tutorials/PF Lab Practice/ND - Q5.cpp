#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE][SIZE];
    int i, j, k;
    int identical;

    
    printf("Enter elements of 3x3x3 matrix (27 numbers):\n");
    for (i = 0; i < SIZE; i++) {
        printf("\nLayer %d:\n", i);
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    printf("\nComparing 2D layers for similarity:\n");
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            identical = 1;

            for (k = 0; k < SIZE && identical; k++) {
                for (int l = 0; l < SIZE; l++) {
                    if (matrix[i][k][l] != matrix[j][k][l]) {
                        identical = 0;
                        break;
                    }
                }
            }

            if (identical)
                printf("Layer %d and Layer %d are IDENTICAL.\n", i, j);
            else
                printf("Layer %d and Layer %d are DIFFERENT.\n", i, j);
        }
    }

    return 0;
}

