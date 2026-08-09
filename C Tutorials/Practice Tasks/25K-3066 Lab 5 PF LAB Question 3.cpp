#include <stdio.h>
int main(){
	int year;
	printf("enter the year\n");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 400== 0){
		printf("It is a Leap Year");
	}else 
	printf("It is not a Leap Year");
	return 0;
}
