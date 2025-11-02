//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles of triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==b)
    {
        printf("The triangle is an equilateral triangle.");
    }
    else if(a==b && c!=b || a==c && b!=c || b==c && a!=c)
    {
        printf("The traingle is an isosceles triangle.");
    }
    else if(a!=b && b!=c && c!=a)
    {
          printf("The triangle is a scalene traingle.");
    }
}
