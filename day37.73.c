//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[100][100];
    int sum[100] = {0};
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];   
        }
    }
    printf("Row sums: ");
    for(int i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }
}
