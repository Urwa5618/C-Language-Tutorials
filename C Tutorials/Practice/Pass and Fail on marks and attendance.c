#include <stdio.h>
int main(){
	int marks;
	printf("Enter Marks:");
	scanf("%d",&marks);
	int attendance;
	printf("Enter Attendance:");
	scanf("%d",&attendance);
	if(marks>=40){
		if(attendance>=75){
			printf("Pass!");
		}else printf("Fail due to less attendance");
	}else printf("Fail due to less score");
	return 0;
}
