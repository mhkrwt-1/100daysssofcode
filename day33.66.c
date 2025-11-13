//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Case:
Input:
5
1 2 4 5 6
3
Output:
1 2 3 4 5 6
*/

#include <stdio.h>
int main()
{
    int n, a[100], x, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements (sorted): ");
    for (i = 0; i < n; i++)
    {
            scanf("%d", &a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &x);
    // Find position to insert
    for (i = 0; i < n; i++) {
        if (x < a[i])
            break;
    }
    // Shift elements
    for (j = n; j > i; j--)
    {
         a[j] = a[j - 1];
    }
     a[i] = x;
     n++;
    
    printf("New array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
