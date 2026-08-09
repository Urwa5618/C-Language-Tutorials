#include <stdio.h>
int main(){
	int choice,a,b,result;
	printf("Enter a & b:\n");
	scanf("%d %d",&a,&b);
	printf("Enter Choice:\n");
	scanf("%d",&choice);
	switch (choice){
		case 1:
			result = a + b;
			printf("Result is:%d",result);
			break;
		case 2:
			result = a - b;
			printf("Result is:%d",result);
			break;
		case 3:
			result = a * b;
			printf("Result is:%d",result);
			break;
		case 4:
			if(b==0){ printf("Division not possible ERROR!\n");
			}else
			result = a / b;
			printf("Result is:%d",result);
			break;
	}
	return 0;
}
