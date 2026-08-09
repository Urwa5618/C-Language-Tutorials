#include <stdio.h>
#include <string.h>
int vowels(char str[], int i);
int main() {
    char str[100];
    scanf("%s", &str);
    printf("Number of vowels in given string is: %d",vowels(str,0));
    return 0;

}
int vowels(char str[], int i){
	if(str[i] == '\0'){
		return 0;
	}
	
	if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' 
	    ||str[i] == 'o' || str[i] == 'u' ||str[i] == 'A'
	    || str[i] == 'E' || str[i] == 'I' ||str[i] == 'O'
	    || str[i] == 'U'){
    	return 1 + vowels(str,i+1);	
	}
	else
		return vowels(str,i+1);
}

