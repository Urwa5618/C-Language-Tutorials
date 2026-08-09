#include<stdio.h>
int main(){
	char Color;
	printf("Enter R for Red Color, Enter Y for Yellow Color, Enter G for Green Color \n ");
	scanf(" %c", &Color);
	if (Color== 'R'){
		printf("Stop!!");
	}else if (Color== 'Y'){
		printf("Caution");
	}else if (Color=='G'){
		printf("Go");
	}else printf("Bye");
	return 0;
}
