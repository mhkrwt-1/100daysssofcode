//Q80: Multiply two matrices.
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    int A[100][100];
    printf("Enter Matrix A:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    int B[100][100];
    printf("Enter Matrix B:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if(c1 != r2)
    {
        printf("Multiplication not possible!");
        return 0;
    }
    int C[100][100] = {0};
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix A:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix C:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
