//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) 
{
    printf("\nFinding top student...\n");
    int topIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (s[i].marks > s[topIndex].marks) 
        {
            topIndex = i;
        }
    }

    return s[topIndex];  // returning the structure
}

int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    printf("Enter details (Name Roll Marks):\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    struct Student topper = getTopStudent(s, n);
    printf("\n================ RESULT ================\n");
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);
}
