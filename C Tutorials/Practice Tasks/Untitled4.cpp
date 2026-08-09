#include<stdio.h>
int main(){
	int num,even=0,odd=0;
	do{	
	printf("Enter number(0 to stop): ");
	scanf("%d",&num);
	if (num !=0){
		if (num%2==0)
		even++;
		else
		odd++;
	}
}while(num!=0);
printf("Total even numbers is %d:\n",even);
printf("Total odd numbers is %d:\n",odd);
return 0;
}

