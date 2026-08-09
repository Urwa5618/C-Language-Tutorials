#include <stdio.h>
int main(){
	char ch;
	double num1, num2, result;
	
	printf("Enter Operator (+,-,*,/): ");
	scanf("%c",&ch);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (ch) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("Result = %.2lf\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }
	
		return 0;
}
