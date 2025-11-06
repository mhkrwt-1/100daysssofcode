//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    long int n, digit;
    long int result = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%ld", &n);
    while (n != 0)
    {
        digit = n % 10;
        if (digit == 0)
            result += 1 * place;
        else
            result += 0 * place;
        place *= 10;
        n /= 10;
    }
    printf("1's complement = %ld\n", result);
}
