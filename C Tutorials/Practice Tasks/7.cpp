#include <stdio.h>
int main() {
    int amount;                
    int A=0,B=0,C=0,D=0;
    printf("Enter the amount in cents: ");
    scanf("%d", &amount);
    if (amount < 0) {
        printf("Amount cannot be negative.\n");
        return 0;   
	}while (amount >= 25) {     
        A++;            
        amount -= 25;          
    }while (amount >= 10) {     
        B++;
        amount -= 10;
    }while (amount >= 5) {
        C++;
        amount -= 5;
    }while (amount >= 1) {
        D++;
        amount -= 1;
    }
	printf("Coins needed:\n");
    printf("Quarters (25c): %d\n", A);
    printf("Dimes    (10c): %d\n", B);
    printf("Nickels   (5c): %d\n", C);
    printf("Pennies   (1c): %d\n", D);
    return 0;
}

