#include<stdio.h>
int main(){
	float temp,humidity;
	printf("Enter Temperature, Enter Humidity");
	scanf("%f %f", &temp,&humidity);
	if (temp>50 && humidity<30){
		printf("System Overheated");
	}else if (temp>=30 && temp<=50 && humidity>=30 && humidity<=70){
		printf("System Normal ");
	}else if (temp<30 || humidity>70){
		printf("System Warning");
	}else printf("Invalid input");
	return 0;
}
