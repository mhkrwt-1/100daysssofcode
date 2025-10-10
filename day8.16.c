//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    largest=a;
    if(a>=largest)
    {
        largest=a;
    }
    if(b>=largest)
    {
        largest=b;
    }
    if(c>=largest)
    {
        largest=c;
    }
    printf("The largest number is %d.",largest);
}