//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("The entered charater is a lowercase alphabet.");
    }   
    else if(ch>='A'&&ch<='Z')
    {
        printf("The entered character is an uppercase alphabet.");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("The entered character is a digit.");
    }
    else
    {
        printf("The entered character is a special digit.");

    }
}