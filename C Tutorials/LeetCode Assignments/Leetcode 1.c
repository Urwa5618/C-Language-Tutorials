#include<stdio.h>
// 25K-3066 Urwa Rafique
void running(){
	int i, running[5];
	int nums[5]={1,2,3,4,5};
	running[0]=nums[0];
	for(i=1;i<5;i++){
		running[i]=nums[i]+running[i-1];
	}
	printf("Running Sum is:\n");
	for(i=0;i<5;i++){
		printf("%d ",running[i]);
	}
}
int main(){
	running();
}

