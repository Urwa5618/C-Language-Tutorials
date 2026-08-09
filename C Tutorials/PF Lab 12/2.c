#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter initial size of array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    arr = (int*)realloc(arr, 2 * n * sizeof(int));
    printf("Enter %d more elements:\n", n);
    for(int i = n; i < 2*n; i++)
        scanf("%d", &arr[i]);
    printf("Updated array:\n");
    for(int i = 0; i < 2*n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
