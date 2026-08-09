#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, extra;
    printf("Enter number of days: ");
    scanf("%d", &N);

    double *sales = (double*)malloc(N * sizeof(double));

    printf("Enter sales for %d days:\n", N);
    for(int i = 0; i < N; i++)
        scanf("%lf", &sales[i]);

    double total = 0;
    for(int i = 0; i < N; i++)
        total += sales[i];

    printf("Total sales: %.2lf\n", total);

    printf("Enter extra days: ");
    scanf("%d", &extra);
    sales = (double*)realloc(sales, (N + extra) * sizeof(double));

    printf("Enter sales for %d extra days:\n", extra);
    for(int i = N; i < N + extra; i++)
        scanf("%lf", &sales[i]);

    total = 0;
    for(int i = 0; i < N + extra; i++)
        total += sales[i];

    printf("Updated total sales: %.2lf\n", total);

    free(sales);
    return 0;
}
