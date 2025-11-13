//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, a[100], search, low, high, mid, found = 0;
    printf("Enter number of elements to be entered:\n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter an element to be searched:");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == search)
        {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (a[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (!found)
    {
        printf("-1\n");
    }
}