#include<stdio.h>
int main(){
	int m1[2][2];
	for(int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Matrix is: \n");
	for(int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of a matrix:\n");
	for(int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d\t",m1[j][i]);
		}
		printf("\n");
	}
	return 0;
}
