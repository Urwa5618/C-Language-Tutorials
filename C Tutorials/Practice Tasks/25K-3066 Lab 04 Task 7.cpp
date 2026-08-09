#include <stdio.h>
int main(){
	int hour;
	printf("Enter the current hour(0-24 24 hour format): \n");
	scanf("%d", &hour);
	if(hour>=5 && hour<=12){
		printf("Good Morning!\n");
	}else if(hour>12 && hour<=18){
		printf("Good Afternoon! \n");
	}else if(hour>=18 && hour<=23){
		printf("Good Evening! \n");
	}else if(hour>=0 && hour<=5){
		printf("Good Night! \n");
	}else{
		printf("Error!!! Please enter a value between 0 and 24.");
	}
	return 0;
}
