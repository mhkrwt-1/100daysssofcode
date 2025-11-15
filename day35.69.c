//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() 
{
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Second largest element: %d", arr[n - 2]);
}
