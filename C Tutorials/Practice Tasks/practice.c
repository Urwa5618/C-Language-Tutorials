//for loop method
#include<stdio.h>
int main(){
	int x,y;
	for(x=10;x<=15;x++){
		printf("%d\n", x);
	}
	return 0;
}
//While Loop method
#include<stdio.h>
int main(){
	int x=10,y;
	while(x<=15){
		printf("%d\n",x);
		x++;
	}
	return 0;
}
//do While Loop Method 
#include<stdio.h>
int main(){
	int x;
	x=10;
	do{
		printf("%d\n",x);
		x++;
	}
	while(x<=15);
	return 0;
}
