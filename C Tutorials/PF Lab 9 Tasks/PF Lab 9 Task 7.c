#include <stdio.h>
void inputRuns(int arr[], int size) {
    printf("Enter runs of %d players:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Player %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
int totalRuns(int *ptr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(ptr + i);
    }
    return total;
}
float averageRuns(int *ptr, int size) {
    return totalRuns(ptr, size) / (float)size;
}
void highestScorer(int *ptr, int size, int *maxRun, int *index) {
    *maxRun = *ptr;
    *index = 0;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > *maxRun) {
            *maxRun = *(ptr + i);
            *index = i;
        }
    }
}
int main() {
    int runs[11];
    int size = 11;
    inputRuns(runs, size);
    int total = totalRuns(runs, size);
    float avg = averageRuns(runs, size);
    int maxRun, index;
    highestScorer(runs, size, &maxRun, &index);
    printf("\nTotal Runs: %d", total);
    printf("\nAverage Score: %.2f", avg);
    printf("\nHighest Scorer: Player %d with %d runs\n", index + 1, maxRun);
    return 0;
}

