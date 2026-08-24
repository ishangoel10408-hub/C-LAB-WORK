#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}