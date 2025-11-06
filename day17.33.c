//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, digit, count = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += (int)(pow(digit, count) + 0.5); 
        temp = temp / 10;
    }
    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
