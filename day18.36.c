//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    printf("HCF = %d\n", hcf);
    return 0;
}
