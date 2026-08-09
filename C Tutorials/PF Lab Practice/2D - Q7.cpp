#include<stdio.h>
int main(){
	int i, j;
	
	int array[10];
	
	printf("Enter 10 Elements of the Array: \n");
	
	for(i=0; i<10; i++){
			
		scanf("%d", &array[i]);
	
	}
	for(i=0; i<10; i++){
		
		for(j=i+1; j<10; j++){
			
			if(array[i] == array[j]){
				
				array[j] = -1;
			}
		}
	}
		
	printf("Processed Array: ");	
		
	for(i=0; i<10; i++){
		
		printf("%d, ", array[i]);
	}	
		
	return 0;
}
