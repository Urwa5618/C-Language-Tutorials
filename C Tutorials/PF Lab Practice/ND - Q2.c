#include <stdio.h>
#include <math.h>
#define MAX 5

float determinant(float a[MAX][MAX], int n) {
    float det = 0;
    float submatrix[MAX][MAX];
    if (n == 1)
        return a[0][0];
    else if (n == 2)
        return (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    else {
      for (int x = 0; x < n; x++) {
            int subi = 0;
        for (int i = 1; i < n; i++) {
         	 int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
                        continue;
                   submatrix[subi][subj] = a[i][j];
                   subj++;
             }
                subi++;
         }
            det += pow(-1, x) * a[0][x] * determinant(submatrix, n - 1);
        }
    }
    return det;
}


int areEqual(float a[MAX][MAX], float b[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
     if (a[i][j] != b[i][j])
                return 0;
    return 1;
}


void multiply(float a[MAX][MAX], float b[MAX][MAX], float res[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
}

int main() {

    float A[MAX][MAX], B[MAX][MAX], temp[MAX][MAX];
    int rows, cols, option;

    printf("Enter number of rows (max 5): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 5): ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%f", &A[i][j]);

    
    int isSquare = (rows == cols);
    int isZero = 1, isIdentity = 1, isDiagonal = 1, isScalar = 1;
    int isUpper = 1, isLower = 1, isSymmetric = 1, isSkew = 1;
    int isRow = (rows == 1);
    int isCol = (cols == 1);
    int isNull = 1;
    int isIdempotent = 0, isNilpotent = 0;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] != 0)
                isZero = 0;
            if (A[i][j] != 0)
                isNull = 0;

            if (isSquare) {
                if (i != j && A[i][j] != 0)
                    isDiagonal = 0;
                if (i != j && A[i][j] != 0)
                    isUpper = (i < j) ? isUpper : 0;
                if (i != j && A[i][j] != 0)
                    isLower = (i > j) ? isLower : 0;

                if (A[i][j] != A[j][i])
                    isSymmetric = 0;
                if (A[i][j] != -A[j][i])
                    isSkew = 0;
            }
        }
    }

    if (isDiagonal) {
        float scalarValue = A[0][0];
        for (int i = 0; i < rows; i++)
            if (A[i][i] != scalarValue)
                isScalar = 0;
        for (int i = 0; i < rows; i++)
            if (A[i][i] != 1)
                isIdentity = 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (i != j && A[i][j] != 0)
                    isIdentity = 0;
    } else {
        isIdentity = 0;
        isScalar = 0;
    }

    
    if (isSquare) {
        float det = determinant(A, rows);
        printf("Determinant = %.2f\n", det);
        if (det == 0)
            printf("Matrix is Singular.\n");
        else
            printf("Matrix is Non-Singular.\n");
    }

    
    if (isSquare) {
        multiply(A, A, temp, rows);
        if (areEqual(A, temp, rows, cols))
            isIdempotent = 1;
    }

    
    if (isSquare) {
        float power[MAX][MAX], result[MAX][MAX];
        
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                power[i][j] = A[i][j];
        for (int k = 2; k <= rows; k++) {
            multiply(power, A, result, rows);
            int zero = 1;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++) {
                    power[i][j] = result[i][j];
                    if (fabs(result[i][j]) > 1e-6)
                        zero = 0;
                }
            if (zero) {
                isNilpotent = 1;
                break;
            }
        }
    }

    
    printf("\n--- Matrix Type(s) ---\n");
    if (isSquare) printf("Square Matrix\n");
    else printf("Rectangular Matrix\n");
    if (isZero) printf("Zero Matrix\n");
    if (isIdentity) printf("Identity Matrix\n");
    if (isDiagonal) printf("Diagonal Matrix\n");
    if (isScalar) printf("Scalar Matrix\n");
    if (isUpper) printf("Upper Triangular Matrix\n");
    if (isLower) printf("Lower Triangular Matrix\n");
    if (isSymmetric) printf("Symmetric Matrix\n");
    if (isSkew) printf("Skew-Symmetric Matrix\n");
    if (isRow) printf("Row Matrix\n");
    if (isCol) printf("Column Matrix\n");
    if (isNull) printf("Null Matrix\n");
    if (isIdempotent) printf("Idempotent Matrix\n");
    if (isNilpotent) printf("Nilpotent Matrix\n");

    
    printf("\nDo you want to compare with another matrix? (1 = Yes, 0 = No): ");
    scanf("%d", &option);
    if (option == 1) {
        printf("Enter elements of second matrix:\n");
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                scanf("%f", &B[i][j]);
        if (areEqual(A, B, rows, cols))
            printf("Matrices are Equal.\n");
        else
            printf("Matrices are NOT Equal.\n");
    }

    return 0;
}

