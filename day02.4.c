//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    int r;
    float area,cir;
    printf("Enter the radius of a circle=\n");
    scanf("%d",&r);
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("Area of the circle=%f\n",area);
    printf("Perimeter of the circle=%f\n",cir);
}