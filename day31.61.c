//Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int n,i,a[100],search,pos=-1;
    printf("Enter number of elements to be entered:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            pos=i;
        }
    }
    if(pos!=-1)
    {
        printf("Found at index:%d",pos);
    }
    else
    {
        printf("NOT FOUND");
    }
}