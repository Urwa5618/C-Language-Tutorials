#include <stdio.h>
#include <stdlib.h>

int main() {
    int *marks,mark,i,size=5,count =0;

    marks = (int*) malloc(size * sizeof(int));
    if (marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter student marks (-1 to stop):\n");
    while (1) {
        scanf("%d", &mark);
        if (mark == -1) break;

        if (count == size) {
            size *= 2;
            marks = (int*) realloc(marks, size * sizeof(int));
            if (marks == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }

        marks[count] = mark;
        count++;
    }

    printf("\nEntered marks:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int sum = 0;
    for (i = 0; i < count; i++) sum += marks[i];

    if (count > 0) printf("Average marks: %.2f\n", (float)sum / count);
    else printf("No marks entered.\n");

    free(marks);
    marks = NULL;

    return 0;
}
