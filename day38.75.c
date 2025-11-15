//Q75: Add two matrices.
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int A[100][100];
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int B[100][100];
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if(r1 != r2 || c1 != c2)
    {
        printf("Matrices cannot be added!");
        return 0;
    }
    int C[100][100];
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("First Matrix:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix (Addition):\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
