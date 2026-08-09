#include <stdio.h>
int main(){
	float actual_amount,amount_saved,new_amount;
	//Asking user to input total cost of shopping
	printf("Enter the total cost of the shopping");
	scanf("%f", &actual_amount);
	if(actual_amount >= 500 && actual_amount <= 2000){
		amount_saved = actual_amount * 0.05;
		new_amount = actual_amount - amount_saved;
		printf("The actual cost of shopping is: %.2f\n", actual_amount);
		printf("The amount saved is: %.2f\n", amount_saved);
		printf("After 5 percent discount the total cost of shopping is:%.2f", new_amount);
	}else if(actual_amount >= 2000 && actual_amount <= 4000){
		amount_saved = actual_amount * 0.10;
		new_amount = actual_amount - amount_saved;
		printf("The actual cost of shopping is: %.2f\n", actual_amount);
		printf("The amount saved is: %.2f\n", amount_saved);
		printf("After 10 percent discount the total cost of shopping is:%.2f", new_amount);
	}else if(actual_amount >= 4000 && actual_amount <= 6000){
		amount_saved = actual_amount * 0.20;
		new_amount = actual_amount - amount_saved;
		printf("The actual cost of shopping is: %.2f\n", actual_amount);
		printf("The amount saved is: %.2f\n", amount_saved);
		printf("After 20 percent discount the total cost of shopping is:%.2f", new_amount);
	}else if(actual_amount >= 6000){
		amount_saved = actual_amount * 0.35;
		new_amount = actual_amount - amount_saved;
		printf("The actual cost of shopping is: %.2f\n", actual_amount);
		printf("The amount saved is: %.2f\n", amount_saved);
		printf("After 35 percent discount the total cost of shopping is:%.2f", new_amount);
	}else{
		printf("You are not eligible for a discount");
	} 
	return 0;
}
