#include<stdio.h>
int main(){
	float A[3][3],cofactor[3][3],adjoint[3][3],inverse[3][3];
	float det = 0;
	int i,j;
	printf("Enter elements of A matrix: ");
	//----Transpose----
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){		
	scanf("%f", &A[i][j]);
	}
}
    printf("Elements of matrix A is:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){		
	printf("%f\t", A[i][j]);
	}
	printf("\n");
}
printf("Transpose of matrix A is:\n");
    for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){		
	printf("%f\t", A[j][i]);
	}
	printf("\n");
}
        //----Determinant----
    det = A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])
        - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])
        + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    printf("\nDeterminant of Matrix A is: %.2f\n",det);
    if (det == 0){
        printf("Inverse is not possible for this matrix A!");
        return 0;
    }
    // ----Co-Factor----
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int r1 = (i + 1) % 3, r2 = (i + 2) % 3;
            int c1 = (j + 1) % 3, c2 = (j + 2) % 3;
            cofactor[i][j] = ((A[r1][c1] * A[r2][c2]) - (A[r1][c2] * A[r2][c1])) * ((i + j) % 2 == 0 ? 1 : -1);
        }
    }
    printf("\nCofactor of matrix A is:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%8.2f",cofactor[i][j]);
        }
        printf("\n");
    }
    // --- Adjoint (Transpose of Cofactor) ---
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            adjoint[j][i] = cofactor[i][j];
        }
    }
    printf("\nAdjoint Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("%8.2f", adjoint[i][j]);
        }
        printf("\n");
    }
    // --- Inverse = (1/det) × Adjoint ---
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            inverse[i][j] = adjoint[i][j] / det;

    printf("\nInverse Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%8.3f", inverse[i][j]);
        printf("\n");
    }
	return 0;
}
