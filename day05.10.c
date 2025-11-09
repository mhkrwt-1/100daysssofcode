//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 
#include <stdio.h>
int main()
{
    int st,h,m,s,rem;
    printf("Enter time in seconds:\n");
    scanf("%d",&st);
    h=st/3600;
    rem = st%3600;
    m = rem/60;
    s = rem%60;
    printf("hours=%d\n",h);
    printf("minutes=%d\n",m);
    printf("seconds=%d\n",s);
}