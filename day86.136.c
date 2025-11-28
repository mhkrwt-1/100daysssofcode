//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() 
{
    char op[15];
    int a, b;
    printf("Enter operation (ADD / SUBTRACT / MULTIPLY) followed by two numbers:\n");
    scanf("%s %d %d", op, &a, &b);
    enum Operation choice;
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 0;
    }
    printf("Performing %s on %d and %d...\n", op, a, b);
    switch (choice) 
    {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
    }
}

