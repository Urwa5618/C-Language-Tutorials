#include <stdio.h>
int main (){
    int seatnumber = 1,r,c;
    for(int r=1;r<=4;r++){
        printf("R%d: ",r);

        for(int c=1;c<=4;c++){
            printf("%d ",seatnumber);
            seatnumber++;
        }
        printf("\n");
    }
    return 0;
}