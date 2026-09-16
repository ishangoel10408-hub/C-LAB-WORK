// Experiment 1: Array Operations Using Functions
// Write a C program to implement the following functions for an integer array:
// 1.	findMaximum() – Find the largest element. 
// 2.	findMinimum() – Find the smallest element. 
// 3.	calculateSum() – Calculate the sum of all elements. 
// 4.	calculateAverage() – Calculate the average of the elements. 
// Accept the array elements from the user and display all the results.

#include <stdio.h>

int findMaximum(int a[], int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int findMinimum(int a[], int n)
{
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    return min;
}

int calculateSum(int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum = sum + a[i];

    return sum;
}

float calculateAverage(int a[], int n)
{
    return (float)calculateSum(a, n) / n;
}

int main()
{
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d\n", findMaximum(a, n));
    printf("Minimum = %d\n", findMinimum(a, n));
    printf("Sum = %d\n", calculateSum(a, n));
    printf("Average = %.2f\n", calculateAverage(a, n));

    return 0;
}