#include <stdio.h>
void calculateFine(int latedays);
int main (){
    int latedays;
    printf("----Library Bill System----\n");
    printf("Enter the latedays:\n");
    scanf("%d",&latedays);
    calculateFine(latedays);
    return 0;
}
void calculateFine(int latedays){
    int Fine;
    if(latedays<=5){
        Fine = 10 * latedays;
    }else if(latedays>5 && latedays<=10){
        Fine = 15 * latedays;
    }else if(latedays>10){
        Fine = 20 * latedays;
    }
    printf("Fine:%d",Fine);
    return;
}