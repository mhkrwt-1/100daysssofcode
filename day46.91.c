//Q91: Remove all vowels from a string.
#include <stdio.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            for (j=i;str[j]!='\0';j++) 
            {
                str[j] = str[j+1];
            }
             i--; 
        }
    }
    printf("NEW STRING=%s",str);
}
