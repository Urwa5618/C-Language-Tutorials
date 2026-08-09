#include <stdio.h>
int main (){
    int units,totalbill;
    printf("Enter the consumed units:\n");
    scanf("%d",&units);
    if(units <= 100){
        totalbill = 10*units;
    }else if(units>101 && units<=300){
        totalbill = 15*units;
    }else if(units>300){
        totalbill = 20*units;
    }
    printf("Total Bill = %d",totalbill);
    return 0;
}