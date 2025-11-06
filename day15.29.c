//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("FACTORIAL OF %d= %d",n,fact);
}