#include<stdio.h>
int main(){
	
	char sentence[100];
	int i;
	
	printf("Enter a Sentence: ");
	scanf("%[^\n]", sentence);
	
	printf("\nOriginal Sentence: %s\n", sentence);
	
	for(i=0; sentence[i] != '\0'; i++){
		
		if(sentence[i] >= 'A' && sentence[i] <= 'Z'){
			
			sentence[i] = sentence[i] + 32;
		}
		else if(sentence[i] >= 'a' && sentence[i] <= 'z'){
			
			sentence[i] = sentence[i] - 32;
			
		}
		
	}
	printf("\nConverted Sentence: %s", sentence);
	
	return 0;
}
