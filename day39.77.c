//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);
    int arr[100][100];
    printf("Enter the matrix:\n");
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
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i][i] == arr[j][j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    if(flag == 1)
        printf("True");
    else
        printf("False");
}
