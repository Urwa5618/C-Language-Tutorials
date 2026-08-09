#include <stdio.h>
float calculatediscount(char type,float amount);
int main (){
    char type;
    float amount;
    printf("Enter customer type (R/M/V):\n");
    scanf("%c",&type);
    printf("Enter amount:\n");
    scanf("%f",&amount);
    float finalamount = calculatediscount(type,amount);
    printf("Final amount after discount =%.2f",finalamount);
    return 0;
}
float calculatediscount(char type,float amount){
    float discount;
    if(type=='R' || type=='r'){
        discount = 0.05;
    }else if(type=='M' || type=='m'){
        discount = 0.10;
    }else if(type=='V' || type=='v'){
        discount = 0.20;
    }else discount = 0.00;
    return amount - (amount * discount);
}