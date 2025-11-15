//Q76: Check if a matrix is symmetric.
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
    int isSym = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                isSym = 0;
                break;
            }
        }
        if(isSym == 0)
            break;
    }
    if(isSym == 1)
        printf("True");
    else
        printf("False");
}
