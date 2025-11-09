//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value for n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        int isPrime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
            printf("%d ",i);
    }
}
