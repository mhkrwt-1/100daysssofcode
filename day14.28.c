//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int i,n,eproduct=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            eproduct=eproduct*i;
        }
    }
    printf("PRODUCT OF EVEN NUMBERS FROM 1 to %d=%d",n,eproduct);

}
