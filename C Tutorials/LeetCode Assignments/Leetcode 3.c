#include<stdio.h>
int main(){
	int arr[6],i,z=0;
	int nums[6]={1,2,3,4,5,6};
	for(i=0;i<6;i++){
		if(nums[i]%2==0){
			nums[i] = 0;
			arr[i]=nums[i];
			z++;
		}else { 
			nums[i]=1;
			arr[i]=nums[i];	
		}
	}
	for(i=0;i<z;i++){
		arr[i]=0;
	}
	for(i=z;i<6;i++){
		arr[i]=1;
	}
	printf("Stored array:\n");
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
}

