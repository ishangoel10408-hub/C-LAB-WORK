// Write a C Program to Insert an Element at the Desired Location in an Array.

#include <stdio.h>

int main() {
    int a[5] = {34, 45, 3, 56, 50};
    int n = 5, pos = 3, x = 25, i;

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}