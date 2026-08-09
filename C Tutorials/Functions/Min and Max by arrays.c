#include<stdio.h>
int main(){
	int arr[5],i;
	int min,max;
	printf("Enter 5 numbers: ");
	for (i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (i=0;i<5;i++){
		if (arr[i] > max){
			max = arr[i];
		}
		if (arr[i] < min){
			min = arr[i];
		}
	}
	printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
	return 0; 
}
