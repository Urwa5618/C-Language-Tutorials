#include<stdio.h>
#include<string.h>
int main(){
	char item [30];
	float price,totalprice,discount=0.0;
	int quantity;
	printf("Enter Item name");
	scanf("%s", &item); 	
	printf("Enter item price");
	scanf("%f", &price);
	printf("Enter item quantity");
	scanf("%d", &quantity);
	if(quantity<=0){
		printf("Error:Quantity must be greater than zero");
		return 0;
	}
	float subtotal = price * quantity;
	if(strcmp(item,"Smartphone")==0 || strcmp(item,"smartphone")){
		discount = 0.12 * subtotal;
		printf("Discount of 12%% applied on Electronic Item.\n");
    } else {
        printf("No discount applicable on this item.\n");
    }
	totalprice = subtotal - discount;
	 printf("\n----- BILL SUMMARY -----\n");
    printf("Item: %s\n", item);
    printf("Quantity: %d\n", quantity);
    printf("Item Price: %.2f\n", price);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount: %.2f\n", discount);
    printf("Total Price: %.2f\n", totalprice);
	return 0;
}
