//Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int n,i,a[100],cEven=0,cOdd=0;
    printf("Enter number of elements to be entered:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cEven=cEven+1;
        }
        else 
        {
            cOdd=cOdd+1;
        }
    }
    printf("Even=%d, Odd=%d",cEven,cOdd);
}