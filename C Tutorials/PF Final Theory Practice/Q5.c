#include <stdio.h>
int main (){
    int correctpin = 1234;
    int pin,attempts =3;
    while (attempts>0)
    {
        printf("Enter Pin:\n");
        scanf("%d",&pin);
        if(pin == correctpin){
            printf("Access Granted. Welcome!");
            return 0;
        }else{
            attempts--;
            printf("Wrong Pin.Attempts left:%d\n",attempts);
        }
    }
    printf("Account Blocked! Too Many incorrect attempts");
    return 0;
}