//Q62: Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    int n,i,a[100],temp;
    printf("Enter number of elements to be entered:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
       temp=a[n-i-1];
       a[n-i-1]=a[i];
       a[i]=temp;
    }
    printf("REVERSED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}