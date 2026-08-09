#include<stdio.h>
int main(){
    int Bill;
    float units;
    printf("Enter electricity units");
    scanf("%f", &units);
    if(units<100){
        Bill = 5 * units;
    }else if (units>100 && units<200){
        Bill = 7 * units;
    }else if (units>200){
        Bill = 10 * units;
    }
    printf("%d is your electricity bill.\n", Bill);
    return 0;
}
