#include <stdio.h>
int sumMatrix(int temp[3][3]) {
    int sum = 0,i,j;
    for( i = 0; i < 3; i++)
        for( j = 0; j < 3; j++)
            sum += temp[i][j];
    return sum;
}
int main() {
    int temp[3][3] = {
        {30, 32, 33},
        {35, 36, 34},
        {28, 27, 29}
    };
    printf("Total sum: %d", sumMatrix(temp));
}

