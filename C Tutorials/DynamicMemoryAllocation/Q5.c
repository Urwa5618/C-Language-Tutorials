#include <stdio.h>
#include <stdlib.h>
int main() {
    int **arr;
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    arr = (int**) malloc(rows * sizeof(int*));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            return 1;
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) free(arr[i]);
    free(arr);
    arr = NULL;
    return 0;
}
