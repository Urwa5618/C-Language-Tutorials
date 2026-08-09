#include<stdio.h>
int main(){
		
		char str[100];
		
		printf("Enter a String: ");
		scanf("%[^A-Za-z]", str);
		
		printf("The String without Alphabets is: %s", str);

	return 0;
}
