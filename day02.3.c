//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int l,b,area,peri;
    printf("Enter the length and breadth of the rectangle=\n");
    scanf("%d %d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("Perimeter of the rectangle=%d\n",peri);
    printf("Area of the reactangle=%d\n",area);
}