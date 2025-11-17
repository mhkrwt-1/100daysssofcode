//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main()
{
    int day, month, year;
    char months[][100] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("%02d-%s-%d", day, months[month - 1], year);
}
