//Q86: Check if a string is a palindrome.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int i = 0, j = 0;
    while(str[j] != '\0')
    {
        j++;
    }
    j--; 
    int isPalindrome = 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
