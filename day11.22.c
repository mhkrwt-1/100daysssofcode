//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp,sp,profit,loss;
    float l,p;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(cp>sp)
    {
        loss=cp-sp;
        l=((float)loss/cp)*100;
        printf("LOSS of %d (%.2f%%)",loss,l);
    }
    if(sp>cp)
    {
        profit=sp-cp;
        p=((float)profit/cp)*100;
        printf("PROFIT of %d (%.2f%%)",profit,p);
    }
    if(sp==cp)
    {
        printf("NO PROFIT,NO LOSS");
    }
}