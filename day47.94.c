//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    char longest[200];
    int maxLen = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int i = 0, start = 0;
    while(1)
    {
        int len = 0;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') 
        {
            len++;
            i++;
        }
        if(len > maxLen) 
        {
            maxLen = len;
            strncpy(longest, str + start, len);
            longest[len] = '\0';   
        }
        if(str[i] == '\0')
            break; 
        i++;             
        start = i;       
    }
    printf("Longest word = %s", longest);
}
