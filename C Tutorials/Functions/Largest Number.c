#include<stdio.h>
int Largest(int a,int b,int c);
int main(){
	int a,b,c;
	printf("Enter a,Enter b,Enter c:\n");
	scanf("%d %d %d",&a,&b,&c);
	Largest(a,b,c);
	return 0;
}
int Largest(int a,int b,int c){
	if(a>b && a>c){
		printf("a is largest\n");
	}else if (b>a && b>c){
		printf("b is largest\n");
	}else printf("c is largest");
	return Largest;
}

