#include <stdio.h>
int main() {
    int arr[10], key, index = -1;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            index = i;   
            break;       
        }
    }
    if (index != -1)
        printf("Number %d found at index %d\n", key, index);
    else
        printf("Number %d not found in the array\n", key);
    return 0;
}
