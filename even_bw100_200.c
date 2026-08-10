#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 100 and 200 are:\n");

    for (i = 100; i <= 200; i = i + 2) {
        printf("%d ", i);
    }

    return 0;
}