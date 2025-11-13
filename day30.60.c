//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int n,i,a[100],cPositive=0,cNegative=0,cZero=0;
    printf("Enter number of elements to be entered:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            cPositive+=1;
        }
        if(a[i]<0)
        {
            cNegative+=1;
        }
        if(a[i]==0)
        {
            cZero+=1;
        }
    }
    printf("NEGATIVE=%d, ZERO=%d, POSITIVE=%d",cNegative,cZero,cPositive);
}