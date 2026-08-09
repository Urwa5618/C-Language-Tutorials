#include<stdio.h>
void india();
void Australia();
void england();
void india(){
	printf("You are in India\n");
	Australia(); //calling Australia
	return;
}
void england(){
	printf("You are in England\n");
	return;
}
void Australia(){
	printf("You are in Australia\n");
	england(); //calling England
	return;
}
int main(){
    india(); //calling India
	return 0;
}

