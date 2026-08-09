#include <stdio.h>

int main() {
    int players[11];

    printf("Enter the scores of 11 players:\n");

    // INPUT (Correct indexing: 0 to 10)
    for(int i = 0; i < 11; i++) {
        scanf("%d", &players[i]);
    }

    // Highest score
    int highest = players[0];
    for(int i = 1; i < 11; i++) {
        if(players[i] > highest) {
            highest = players[i];
        }
    }
    printf("Highest Scorer = %d\n", highest);

    // Average score
    int sum = 0;
    for(int i = 0; i < 11; i++) {
        sum += players[i];
    }
    float avg = (float)sum / 11;
    printf("Average Score of Players: %.2f\n", avg);

    // Count players who scored < 20
    int count = 0;
    for(int i = 0; i < 11; i++) {
        if(players[i] < 20) {
            count++;
        }
    }
    printf("Players who scored less than 20 runs: %d\n", count);

    return 0;
}
