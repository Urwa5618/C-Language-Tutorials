#include <stdio.h>
int main() {
    int choice;
    float total = 0;
    while (1) {
        printf("\n------ MENU ------\n");
        printf("1. Burger - 250\n");
        printf("2. Pizza  - 900\n");
        printf("3. Fries  - 120\n");
        printf("0. Print Bill & Exit\n");
        printf("-------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        switch (choice) {
            case 1:
                total += 250;
                printf("Burger added!\n");
                break;
            case 2:
                total += 900;
                printf("Pizza added!\n");
                break;
            case 3:
                total += 120;
                printf("Fries added!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    float discount = 0;
    if (total > 1000) {
        discount = total * 0.05;
    }
    float finalBill = total - discount;
    printf("\n=====================\n");
    printf("Total Bill: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Bill: %.2f\n", finalBill);
    printf("=====================\n");
    return 0;
}

