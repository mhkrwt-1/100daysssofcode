//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[100][100];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal Traversal: ");
    for(int d = 0; d < rows + cols - 1; d++)
    {
        int r, c;
        if(d < cols)
        {
            r = 0;
            c = d;
        }
        else
        {
            r = d - cols + 1;
            c = cols - 1;
        }
        while(r < rows && c >= 0)
        {
            printf("%d ", arr[r][c]);
            r++;
            c--;
        }
    }
}
