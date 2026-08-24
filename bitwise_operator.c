#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 5;

    printf(" a & b : %d\n", a && b);
    printf(" a | b : %d\n", a || b);
    printf(" a ^ b : %d\n", a ^ b);
    printf(" a >> b : %d\n", a >> b);
    printf(" a << b : %d\n", a << b);
    printf(" ~a : %d\n", ~a);
    printf(" ~b : %d\n", ~b);
    return 0;
}