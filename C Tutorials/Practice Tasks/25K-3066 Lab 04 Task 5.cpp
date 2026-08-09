#include <stdio.h>
int main(){
	float weight;
	int cost;
	printf("Enter the weight of the package: \n");
	scanf("%f", &weight);
	if(weight>0 && weight<=5){
		printf("The shipping cost is $10. \n");
	}else if( weight>=5 &&weight<=10){
		printf("The shipping cost is $20. \n");
	}else {
		printf("The total shipping cost is $30. \n");
	}
	return 0;
}
