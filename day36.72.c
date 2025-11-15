//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
int main()
{
    int rows, cols, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[100][100];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements: %d", sum);
}
