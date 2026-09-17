// Experiment 2: Recursive Function – Factorial and Fibonacci
// Write a C program to implement the following using recursive functions:
// 1.	factorial(n) – Calculate the factorial of a number. 
// 2.	fibonacci(n) – Find the nth Fibonacci number. 
// Accept n from the user and display the results.

#include <stdio.h>

int factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", factorial(n));
    printf("Fibonacci = %d", fibonacci(n));

    return 0;
}