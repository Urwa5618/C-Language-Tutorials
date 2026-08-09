#include<stdio.h>
int table(int a);
int main(){
	int a;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	table(a);
	return 0;
}
int table(int a){
	int i;
	for(i=1;i<11;i++){
	printf("%d x %d = %d\n",a,i,a*i);
	}
	return a*i;
}

