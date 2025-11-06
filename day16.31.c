//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n, binary = 0, place = 1, rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0\n");
        return 0;
    }
    while(n>0)
    {
        rem=n%2;          
        binary=binary+rem*place; 
        n=n/2;            
        place=place*10;    
    }
    printf("Binary representation: %d\n", binary);
}
