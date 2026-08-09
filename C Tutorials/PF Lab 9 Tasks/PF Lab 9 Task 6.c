#include <stdio.h>
void inputAttendance(int arr[4][5]) {
	int i,j;
    printf("Enter attendance (1 = present, 0 = absent):\n");
    for ( i = 0; i < 4; i++) {
        printf("\nStudent %d:\n", i + 1);
        for ( j = 0; j < 5; j++) {
            printf("Class %d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}
void calculateAttendance(int arr[4][5]) {
	int i,j;
    for ( i = 0; i < 4; i++) {
        int presentCount = 0;
        for ( j = 0; j < 5; j++) {
            presentCount += arr[i][j];
        }
        float percentage = (presentCount / 5.0f) * 100;
        printf("\nStudent %d Attendance: %.2f%%\n", i + 1, percentage);
        if (percentage < 75)
            printf("? Warning: Attendance below 75%%\n");
    }
}
int main() {
    int attendance[4][5];
    inputAttendance(attendance);
    calculateAttendance(attendance);
    return 0;
}

