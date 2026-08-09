#include<stdio.h>
int main(){
	int participants,i,fact=1;
	printf("Enter Number of Participants");
	scanf("%d", &participants);
	for(i=1;i<=participants;i++){
		fact=fact*i;
	}
	if (participants < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Total arrangements for %d participants = %d\n",
               participants, fact);
    }
	return 0;
}
