#include <stdio.h>
int main(){
	int MaxLimit =500, Amount;
	printf("Enter Withdrawal Amount");
	scanf("%d", &Amount);
	if (Amount <= MaxLimit && Amount %20 ==0){
		printf("Withdrawal Approved!");
	}else printf("Withdrawal Denied");
	return 0;
}
