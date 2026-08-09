#include <stdio.h>
int ConvertTemp(float Celsius);
int main(){
	float far = ConvertTemp(0);
	printf("Far is:%f",far);
	return 0;
}

float ConverTemp(float Celsius){
	float far = (Celsius * 9/5) + 32;
	return far;
}
