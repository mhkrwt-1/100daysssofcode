//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}