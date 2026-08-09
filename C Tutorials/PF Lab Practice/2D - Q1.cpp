#include<stdio.h>
int main(){
	
		int array[5];
		
		printf("Enter the Elements of the Array: \n");
		
		for(int i=0; i<5; i++){
			scanf("%d", &array[i]);
		}
	
		int last = array[4]; 
		
		for(int i=4; i>0; i--){
			
			array[i] = array[i-1];
		}
		array[0] = last;
		
		for(int i=0; i<5; i++){
			printf("%d", array[i]);
		}
		return 0;
}
