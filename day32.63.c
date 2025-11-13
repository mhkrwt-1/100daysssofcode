//Q63: Merge two arrays.
#include <stdio.h>
int main()
{
    int n1,n2,i,a[100],b[100],c[100];
    printf("Enter number of elements to be entered in the first array:");
    scanf("%d",&n1);
    printf("Enter elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number of elements to be entered in the second array:");
    scanf("%d",&n2);
    printf("Enter elements:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int n3=n1+n2;
    printf("NEW ARRAY\n");
    for(i=0;i<n3;i++)
    {
        if(i>=n1)
        {
            c[i]=b[i-n1];
        }
        else
        c[i]=a[i];
    }
    for(i=0;i<n3;i++)
    {
        printf("%d\n",c[i]);
    }
}