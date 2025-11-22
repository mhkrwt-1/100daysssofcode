//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int freq[n];   
    for(int i = 0; i < n; i++)
        freq[i] = 0;
    int repeated = -1;
    for(int i = 0; i < n; i++) 
    {
        freq[arr[i]]++;
        if(freq[arr[i]] == 2) 
        {
            repeated = arr[i];
            break;
        }
    }
    printf("Repeated number is: %d", repeated);
}