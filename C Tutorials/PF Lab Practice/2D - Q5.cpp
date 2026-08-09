#include<stdio.h>
int main(){
	
	int array[10];
	int min, max;
	
	printf("Enter 10 Elements of the Array: \n");
	
	for(int i=0; i<10; i++){
		
		scanf("%d", &array[i]);
	}
	max = array[0];
	
	for(int i=0; i<10; i++){
		
		if(array[i] > max){
		
			max = array[i];	
		}	
	}
	printf("Maximum Number: %d\n", max);
	
	min = array[0];
	
	for(int i=0; i<10; i++){
		
		if(array[i] < min){
		
			min = array[i];	
		}	
	}
	printf("Minimum Number: %d\n", min);
	
	printf("Difference: %d", max - min);
	
	return 0;
}
