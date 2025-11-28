//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() 
{
    struct Employee e1, e2;
    printf("Enter Employee Details:\n");
    printf("Name: ");
    scanf("%s", e1.name);
    printf("ID: ");
    scanf("%d", &e1.id);
    printf("Salary: ");
    scanf("%f", &e1.salary);
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) 
    {
        printf("Error opening file for writing!\n");
        return 0;
    }
    printf("\nWriting employee data to binary file...\n");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) 
    {
        printf("Error opening file for reading!\n");
        return 0;
    }
    printf("Reading employee data from binary file...\n");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n=========== EMPLOYEE DATA READ FROM FILE ===========\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);
}
