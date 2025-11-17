//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, lastSpace = -1;
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            lastSpace = i;
    }
    if(str[0] != ' ')
        printf("%c.", str[0]);
    for(i = 1; i < lastSpace; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
            printf("%c.", str[i+1]);
    }
    printf(" %s", str + lastSpace + 1);
}
