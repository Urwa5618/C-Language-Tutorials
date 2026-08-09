#include <stdio.h>
int main(){
	int credit;
	printf("Please enter credit: \n");
	scanf("%d", &credit);
	if(credit>=0 && credit<=599){
		printf("You are not eligible for loan!!! \n");
	}else if(credit>=600 && credit<=699){
		printf("Please provide required documents: \n");
	}else{
		printf("You are eligible for loan");
	}
	return 0;
}
