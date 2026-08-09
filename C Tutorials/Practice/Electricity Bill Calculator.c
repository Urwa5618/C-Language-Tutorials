#include <stdio.h>
int main(){
	int units,bill;
	scanf("%d",&units);
	if(units>=1 && units<=100){
		bill = units * 10;
	}else if(units>=101 && units<=300){
		bill = units * 15;
	}else if(units>300){
		bill = units * 20;
	}
	if(bill>5000){
		bill += bill * 0.1;
	}
	printf("Bill is: %d",bill);
	return 0;
}
