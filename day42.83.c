//Q83: Count vowels and consonants in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if(c >= 'A' && c <= 'Z')
            c = c + 32; // convert to lowercase

        if(c >= 'a' && c <= 'z')
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
}
