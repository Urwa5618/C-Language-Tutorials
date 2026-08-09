//25K-3066 Urwa Rafique
#include <stdio.h>
void moveZeroes(int nums[], int size) {
    int index = 0,i;
    for (i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }
    while (index < size) {
        nums[index] = 0;
        index++;
    }
}
int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    moveZeroes(nums, size);
    printf("Output: [");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}

