//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    char filename[100];
    int num, sum = 0, count = 0;
    printf("Enter filename to create (e.g., numbers.txt): ");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) 
    {
        printf("Error: Could not create the file.\n");
        return 1;
    }
    int n, value;
    printf("How many numbers do you want to write to the file? ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &value);
        fprintf(fp, "%d ", value);
    }
    fclose(fp);
    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) 
    {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) 
    {
        printf("No integers found in the file.\n");
        return 0;
    }
    float average = (float) sum / count;
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
}
