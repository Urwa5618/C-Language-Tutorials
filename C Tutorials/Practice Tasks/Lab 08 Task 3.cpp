#include<stdio.h>
int main(){
	int m1[2][2] = {{1,2},{3,4}};
	int m2[2][2] = {{5,6},{7,8}};
	int m3[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("Sum of two matrices:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
