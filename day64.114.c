//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);
    int freq[256] = {0};
    int left = 0, right = 0;
    int maxLen = 0;
    int n = strlen(s);
    while (right < n) 
    {
        freq[(int)s[right]]++;
        while (freq[(int)s[right]] > 1) 
        {
            freq[(int)s[left]]--;
            left++;
        }
        int windowLen = right - left + 1;
        if (windowLen > maxLen) 
        {
            maxLen = windowLen;
        }
        right++;
    }
    printf("Length of Longest Substring Without Repeating Characters: %d", maxLen);
}
