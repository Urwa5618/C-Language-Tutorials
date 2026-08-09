#include <stdio.h>
int add(int a,int b){
    return a + b;
}
int Multiplication(int a,int b){
    return a * b;
}
int reversenum(int num){
    int rev = 0;
    while (num > 0)
    {
        rev = rev*10 + (num % 10);
        num/=10;
    }
    return rev;
}
int main (){
    int a,b,num,choice;
    while (1)
    {
        printf("\n----MENU----\n");
        printf("1.Addition\n");
        printf("2.Multiplication\n");
        printf("3.Reverse a number\n");
        printf("4.EXIT\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("Result = %d",add(a,b));
            break;
        case 2:
            printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("Result = %d",Multiplication(a,b));
            break;
        case 3:
            printf("Enter a number:\n");
            scanf("%d",&num);
            printf("Result = %d",reversenum(num));
            break;
        case 4:
            printf("Exiting Program! Good Bye.");
        return 0;
        default:
        printf("Invalid Choice Please Try Again!\n");
        }
    }
    
    return 0;
}