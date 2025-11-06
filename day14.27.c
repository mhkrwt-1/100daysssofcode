//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int i,n,osum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            osum=osum+i;
        }
    }
    printf("SUM OF ODD NUMBERS=%d",osum);
}