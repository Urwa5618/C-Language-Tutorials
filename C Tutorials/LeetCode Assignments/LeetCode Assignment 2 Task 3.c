//25K-3066 Urwa Rafique
#include <stdio.h>
int removeDuplicates(int nums[], int size) {
    if (size == 0) return 0;
    int i = 0,j; // Index of last unique element
    for ( j = 1; j < size; j++) {
        if (nums[j] != nums[i]) {
            i++;            // Move to next position for unique element
            nums[i] = nums[j]; // Copy unique element
        }
    }
    return i + 1; // Number of unique elements
}
int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4},i;
    int size = sizeof(nums)/sizeof(nums[0]);
    int k = removeDuplicates(nums, size);
    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: [");
    for ( i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i != k-1) printf(", ");
    }
    printf("]\n");
    return 0;
}

