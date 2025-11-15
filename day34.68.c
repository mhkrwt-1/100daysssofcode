//Q68: Delete an element from an array.
#include <stdio.h>

int main()
{
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
            scanf("%d", &arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos <= 0 || pos >= n)
    {
        printf("Invalid position!");
    }
    for(int i = pos; i < n - 1; i++)
    {
            arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++)
    {
            printf("%d ", arr[i]);
    }
}
