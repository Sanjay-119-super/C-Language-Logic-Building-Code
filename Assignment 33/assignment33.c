#include<stdio.h>
//Q1
int main()
{
    int arr[3][3];
    int i, j, sum=0;
        printf("Enter 9 elements for a 3x3 matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            fflush(stdin);	
            printf("Enter the element at [%d][%d] \n",i,j);
            scanf("%d",&arr[i][j]);
            while(getchar() != '\n'); // clear buffer

        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\nSum of all elements in the matrix: %d\n", sum);
    return 0;
    
}
#include <stdio.h>

/*
    Program   : Multiply Two 3x3 Matrices
    Purpose   : C[i][j] = sum over k of A[i][k] * B[k][j]
*/

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nProduct Matrix C = A × B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
