/*A square matrix A = (aij) is called symmetric if aij = aji 
for all indices i,j. A is called skew-symmetric if aij = -aji 
for all indices i,j with i != j. Write a function that, given a 
square matrix A, computes a symmetric matrix B and a skew-symmetric 
matrix C satisfying A = B + C.*/

#include<stdio.h>

int main() {
    int n, count;
    float A[10][10], T[10][10], B[10][10], C[10][10], R[10][10];
    printf("Enter the size of the matrix:- ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
            T[j][i] = A[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = (0.5) * (A[i][j] + T[i][j]);
            C[i][j] = (0.5) * (A[i][j] - T[i][j]);
            R[i][j] = B[i][j] + C[i][j];
            if(R[i][j]==A[i][j]){
                count += 1;
            }
            printf("%.2f\t", R[i][j]);
        }
        printf("\n");
    }
    if(count == (n*n)){
        printf("A=B+C Satisfied");
    }
    else{
        printf("A=B+C Not Satisfied");
    }
    return 0;
}