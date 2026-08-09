#include <stdio.h>
int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int target, found = 0,i,j;
    printf("Enter element to search: ");
    scanf("%d", &target);
    int *ptr = &arr[0][0];
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (*(ptr + i*3 + j) == target) {
                printf("Element %d found at row %d, column %d\n", target, i, j);
                found = 1;
            }
        }
    }
    if (!found)
        printf("Element not found.\n");
    return 0;
}

