#include<stdio.h>
int main(){
	
	int array[10];
	int number=0, count=0;
	
	printf("Enter 10 Elements of the array: \n");
	
	for(int i=0; i<10; i++){
		
		scanf("%d", &array[i]);
	}
	
	printf("Enter a number to search for: ");
	scanf("%d", &number);
	
	for(int i=0; i<10; i++){
		
		if(array[i] == number){
			
			 count++;
		}
		}
		if(count > 0){
			printf("%d occured %d times", number, count);
		}
		else{
			printf("Number not found.");
		}		
	return 0;
}
