#include <stdio.h>
int main(){
	char Character;
	//Asking user to input a Charcter
	printf("Enter a Character: \n");
	scanf("%c", &Character);
	if (Character >='a'&& Character <='z'){
		printf("This Character is a small alphabet");
	}else if (Character >='A'&& Character <='Z'){
		printf("This Character is a capital alphabet");
	}else if (Character >='0'&& Character <='9'){
		printf("This Character is a digit");
	}else{
		printf("This is a special Character");
	}
	return 0;
}
