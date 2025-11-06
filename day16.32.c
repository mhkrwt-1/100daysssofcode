//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int n,rev=0,temp,st;
    printf("Enter a number: ");
    scanf("%d",&n);
    st=n;
    while(st!=0)
    {
        temp=st%10;
        rev=rev*10+temp;
        st=st/10;
    }
    if(rev==n)
    {
        printf("YES, the number entered is palindrome.");
    }
    else
    {
        printf("NO, the number entered is not palindrome.");
    }
}