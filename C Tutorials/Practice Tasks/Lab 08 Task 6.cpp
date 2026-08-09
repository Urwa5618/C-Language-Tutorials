#include <stdio.h>
int main() {
    int a[3][3];
    int i, j, k;
    int min, col, isSaddle = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        min = a[i][0];
        col = 0;
        for (j = 1; j < 3; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }
        for (k = 0; k < 3; k++) {
            if (a[k][col] > min)
                break;
        }
        if (k == 3) {
            printf("Saddle point = %d at position (%d, %d)\n", min, i, col);
            isSaddle = 1;
        }
    }
    if (!isSaddle)
        printf("No saddle point found.\n");

    return 0;
}

