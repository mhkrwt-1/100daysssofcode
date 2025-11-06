//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum += numerator/denominator;
        numerator +=2;
        denominator +=2;
    }
    printf("Approximate sum: %.1f\n", sum);
}
