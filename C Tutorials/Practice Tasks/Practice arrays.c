#include<stdio.h>
int main(){
	int marks[10] = {95,85,75,32,67,98,90,34,56,65};
	int i;
	for(i=0;i<10;i++){
		if(marks[i]<35){
			printf("%d ",marks[i]);
		}
	}
return 0;
}
