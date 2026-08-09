#include<stdio.h>
int main(){
	
    int pass[10], fail[10];
    int passCount = 0, failCount = 0;
    int mark;
    float passSum = 0, failSum = 0;

    printf("Enter quiz marks for up to 10 students (enter -1 to stop):\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &mark);

        if (mark == -1) {
            break;
        }

        if (mark >= 5 && mark <= 10){
            pass[passCount] = mark;
            passSum += mark;
            passCount++;
        } else if (mark >= 0 && mark < 5){
            fail[failCount] = mark;
            failSum += mark;
            failCount++;
        } else {
            printf("Invalid mark! Please enter a value between 0 and 10.\n");
            i--; 
        }
    }

    printf("\nMarks of Passed Students: ");
    for (int i = 0; i < passCount; i++) {
        printf("%d ", pass[i]);
    }

    printf("\nMarks of Failed Students: ");
    for (int i = 0; i < failCount; i++) {
        printf("%d ", fail[i]);
    }

    float passAvg = 0, failAvg = 0;

    if (passCount > 0){
        passAvg = passSum / passCount;
    }
    if (failCount > 0){
        failAvg = failSum / failCount;
	}
    printf("\n\nAverage of Passed Students: %.2f", passAvg);
    printf("\nAverage of Failed Students: %.2f\n", failAvg);

    return 0;
}

