#include<stdio.h>
// 25K-3066 Urwa Rafique
void swapping(int nums[],int n,int swap[]){
	int i,x=0;
	for(i=0;i<n;i++){
		swap[x++]=nums[i];
		swap[x++]=nums[i+n];
	}
}
int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int n = 4,i;
	int res[8];
	swapping(arr,n,res);
	
	printf("Swapped array:\n");
	for(i=0;i<2*n;i++){
		printf("%d ",res[i]);
	}
}
