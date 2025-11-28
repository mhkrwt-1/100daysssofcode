//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    struct Student s;
    struct Student *ptr;
    ptr = &s;  // pointer to the struct
    printf("Enter student details (Name Roll Marks):\n");
    printf("Name: ");
    scanf("%s", ptr->name);
    printf("Roll: ");
    scanf("%d", &ptr->roll);
    printf("Marks: ");
    scanf("%d", &ptr->marks);
    printf("\nModifying/Accessing data using pointer...\n");
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);
}
