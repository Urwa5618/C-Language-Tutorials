#include <stdio.h>
int main() {
    int marks[5],Sum=0;
    float Avg;
    printf("Enter values of an array:");
    for(int i = 0;i < 5;i++){
        scanf("%d\t",&marks[i]);
    }
    for(int i = 0;i < 5;i++){
        Sum = Sum + marks[i];
    }
    Avg = Sum / 5;
    printf("%d\n",Sum);
    printf("%f\n",Avg);
    return 0;
}