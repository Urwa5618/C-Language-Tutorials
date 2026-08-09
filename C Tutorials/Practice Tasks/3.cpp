#include <stdio.h>
int main() {
    int balance = 50000;
    int withdraw;
    while (balance > 0) {
        printf("Current balance: %d\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
    if (withdraw > balance) {
            printf("Insufficient funds. \n");
        } else {
            balance = balance - withdraw;
            printf("Withdrawal successful. New balance: %d\n", balance);
        }
    }
    return 0;
}
