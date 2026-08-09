#include <stdio.h>
void decreasing(int n);
int main(){
	int n;
	scanf("%d",&n);
	int dec = decreasing(n);
	return 0;
}

void decreasing(int n){
	if(n==0){
		return 1;
	}
	printf("%d\n",n);
	decreasing(n-1);
	return 0;
}
