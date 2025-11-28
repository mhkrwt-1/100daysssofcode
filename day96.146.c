//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() 
{
    struct Employee e;
    printf("Enter Employee Details:\n");
    printf("Name: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);
    printf("\n=========== EMPLOYEE DETAILS ===========\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);
}
