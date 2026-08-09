#include <stdio.h>
int main() {
    int floors, rooms;
    printf("Enter number of floors: ");
    scanf("%d", &floors);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);
    int hotel[floors][rooms];
    printf("\nEnter room prices:\n");
    for (int i = 0; i < floors; i++) {
        printf("Floor %d:\n", i + 1);
        for (int j = 0; j < rooms; j++) {
            printf("  Room %d price: ", j + 1);
            scanf("%d", &hotel[i][j]);
        }
    }
    int highestFloor = 0;
    int highestTotal = 0;
    for (int i = 0; i < floors; i++) {
        int sum = 0;
        for (int j = 0; j < rooms; j++) {
            sum += hotel[i][j];
        }
        printf("Total of Floor %d = %d\n", i + 1, sum);
        if (sum > highestTotal) {
            highestTotal = sum;
            highestFloor = i;  
        }
    }
    printf("\nFloor %d has the highest total = %d\n", highestFloor + 1, highestTotal);
    return 0;
}
