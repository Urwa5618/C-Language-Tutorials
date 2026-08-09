#include <stdio.h>
int main(){
	int PIN = 1234;
	int userin;
	scanf("%d",&userin);
	for(i=1;i<4;i++){
		if(userin!=PIN){
			printf("Card Blocked");
		}
	}
	int withdraw;
	scanf("%d",&withdraw);
	printf("Withdrawal Amount is:%d",withdraw);
	return 0;
}
