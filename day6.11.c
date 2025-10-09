//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("The number entered is even.");
    }
    else{
        printf("The number entered is odd.");
    }
}