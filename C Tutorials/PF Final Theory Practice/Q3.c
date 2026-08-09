#include <stdio.h>
int main (){
    int BP,HB,temp;
    printf("Enter the Blodd Pressure,Heartbeat and Temperature:\n");
    scanf("%d %d %d",&BP,&HB,&temp);
    if(BP>120){
        if(HB>100){
            if(temp>100){
                printf("Condition of patient is critical!");
            }
        }
    }else if(BP<100 && BP>85){
        if(HB<85 && HB>55){
            if(temp>100){
                printf("Condition of patient is Serious!");
            }
        }
    }else if(BP<130 && BP>100){
        if(HB<100 &&HB>85){
            if(temp<100 && temp>90){
                printf("Condition of patient is Normal!");
            }
        }
    }
    return 0;
}