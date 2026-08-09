#include <stdio.h>
int deposit(int balance) {
    int depamount;
    printf("Enter amount to deposit: ");
    scanf("%d", &depamount);
    balance = balance + depamount;
    printf("Deposited Successfully!\n");
    return balance;
}
int withdraw(int balance) {
    int withamount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &withamount);
    if (withamount > balance) {
        printf("Insufficient Balance!\n");
    } else {
        balance = balance - withamount;
        printf("Withdrawal Successful!\n");
    }
    return balance;
}
void check_balance(int balance) {
    printf("Balance is: %d\n", balance);
}
int main() {
    int balance = 50000;
    balance = deposit(balance);
    balance = withdraw(balance);    
    check_balance(balance);        
    return 0;
}
