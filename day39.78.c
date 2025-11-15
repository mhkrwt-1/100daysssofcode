//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[100][100];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    printf("Sum of main diagonal: %d", sum);
}
