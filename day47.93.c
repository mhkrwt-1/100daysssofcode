//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
int main()
{
    int i,j,count=0;
    char str1[100],str2[100];
    int used[100] = {0};  
    printf("Enter two string:");
    scanf("%s %s",str1,str2);
    if(strlen(str1)==strlen(str2))
    {
        for(i=0;i<strlen(str1);i++)
        {
            for(j=0;j<strlen(str2);j++)
            {
                if (str1[i] == str2[j] && used[j] == 0)   // ⭐ match only unused char
                {
                    count++;
                    used[j] = 1;   // ⭐ mark as used
                    break;
                }
            }
        }
    }
    else
    {
        printf("Not AN ANAGRAM.");
    }
    if(count==strlen(str1))
    printf("ANAGRAM");
    else
    printf("NOT AN ANAGRAM.");
}