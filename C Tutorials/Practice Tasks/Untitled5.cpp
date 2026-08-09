#include<stdio.h>
int main(){
	int code,quantity=0;
	printf("Enter item code: (1-5),Enter Quantity");
	scanf("%d %d", &code, &quantity);
	if (code>=1 && code<=5){
	if (quantity<=0){
		printf("invalid quantity");
	}else if (quantity <= 5){
		printf("Stock available");
	}else
		printf("Bulk order possible");
	}else printf("Invalid Item");
	return 0;
}
