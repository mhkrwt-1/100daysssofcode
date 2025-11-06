//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n,st,temp,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    st=n;
    while(st!=0)
    {
        temp=st%10;
        rev=rev*10+temp;
        st=st/10;
    }
    printf("REVERSED NUMBER= %d",rev);
}