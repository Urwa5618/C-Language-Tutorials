#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i, j, k;
    int layerSum, totalSum = 0;

    
    printf("Enter 27 elements for the 3x3x3 array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("arr[%d][%d][%d] = ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    
    printf("\n=== Layer-wise Data and Totals ===\n");
    for(i = 0; i < 3; i++) {
        layerSum = 0;
        printf("\nLayer %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("%4d ", arr[i][j][k]);
                layerSum += arr[i][j][k];
            }
            printf("\n");
        }
        printf("Sum of Layer %d = %d\n", i + 1, layerSum);
        totalSum += layerSum;
    }

    
    printf("\nOverall Total of all elements = %d\n", totalSum);

   
    printf("Average of all elements = %.2f\n", totalSum / 27.0);

    return 0;
}

