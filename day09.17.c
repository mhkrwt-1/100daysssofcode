//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double disc, root1, root2, realPart, imagPart;
    scanf("%lf %lf %lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0)
    {
       
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (disc == 0) 
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else 
    {     
        printf("Roots are complex\n");
    }

    return 0;
}
