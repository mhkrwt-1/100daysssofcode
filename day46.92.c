//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,found=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                found=1;
                ch=str[i];
                break;
            }
        }
        if(found==1)
        {
            break;
        }
    }
    if (found==1)
    printf("FIRST REPEATING LETTER=%c",ch);
    else 
    printf("NO REPEATING LETTER");
}