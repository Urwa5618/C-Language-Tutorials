#include <stdio.h>
int main() {
    int n;
    printf("Array Size = ");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Output: ");
    int found = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) { 
                printf("Number %d ", arr[i]);
                found = 1;
                break; 
            }
        }
    }
    if (found)
        printf("in array occur more than once.\n");
    else
        printf("No duplicate numbers found.\n");
    return 0;
}

