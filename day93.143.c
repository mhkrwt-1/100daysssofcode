//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

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
    int topIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (s[i].marks > s[topIndex].marks) 
        {
            topIndex = i;
        }
    }
    printf("\n================ RESULT ================\n");
    printf("Topper: %s (Marks: %d)\n", s[topIndex].name, s[topIndex].marks);
}
