//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main()
{
    int n, first, last, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = temp % 10;       
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;          
    n = n % power;          
    n = n / 10;             
    int swapped = last * power + n * 10 + first;
    printf("After swapping first and last digit: %d\n", swapped);
}
