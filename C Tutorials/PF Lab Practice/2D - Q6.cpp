#include<stdio.h>
int main(){
	
	char word[50];
	int i, countvowel=0, countcons=0;
	
	printf("Enter a Word: ");
	scanf("%[^\n]", word);
	
	for(i=0; word[i] != '\0'; i++){
		
		if(word[i] == 'a'|| word[i] == 'A'||word[i] == 'e'||word[i] == 'E'||word[i] == 'i'||word[i] == 'I'||word[i] == 'o'||word[i] == 'O'||word[i] == 'u'
		||word[i] == 'U'){
			
			countvowel++;
		}
		else if(word[i] >= 'a'|| word[i] <= 'z'||word[i] >= 'A'||word[i] <= 'Z'){
			
			countcons++;
		}
	}
	printf("Vowels: %d\n", countvowel);
	printf("Consonants: %d\n", countcons);

	return 0;
}
