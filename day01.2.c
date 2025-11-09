//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int a,b,sum,diff,pr,qo;
    printf("Enter two numbers=\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    pr=a*b;
    qo=a/b;
    printf("Sum of the two numbers=%d\n",sum);
    printf("Difference of the two numbers=%d\n",diff);
    printf("Product of the two numbers=%d\n",pr);
    printf("Quotient of the two numbers=%d",qo);
    
}