#include <stdio.h>
void Sum(int n,int s);
int main(){
	int n;
	scanf("%d",&n);
	Sum(n,0);
	return 0;
}
void Sum(int n,int s){
	if(n==0){
		printf("Sum of 1 to n is:%d",s);
		return;
	}
	Sum(n-1,s+n);
}

