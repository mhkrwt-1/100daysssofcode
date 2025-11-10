//Q57: Find the sum of array elements.
#include <stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
}
