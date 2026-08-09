//25K-3066 Urwa Rafique
#include<stdio.h>
#include<string.h>
void rev(char *str,int size);
int main(){
	char str[50];
	printf("Enter the string :\n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str,"\n")] = '\0';
	int size = strlen(str);
	
	rev(str, size);
	printf("reversed string is : %s",str);
	return 0;
}
void rev(char *str,int size){
	int left = 0;
	int right = size -1;
	char temp;
	while(left <right ){
		temp = str[left];
		str[left] = str[right];
		str[right]= temp;
		left++;
		right--;
	}
}
