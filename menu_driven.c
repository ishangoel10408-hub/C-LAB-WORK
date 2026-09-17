#include <stdio.h>

void evenOdd(int n) {
    if(n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void prime(int n) {
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

void palindrome(int n) {
    int temp = n, rev = 0;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

void sumDigits(int n) {
    int sum = 0;

    while(n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);
}

void reverse(int n) {
    int rev = 0;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reverse = %d\n", rev);
}

int main() {
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("\n1. Even or Odd");
        printf("\n2. Prime");
        printf("\n3. Palindrome");
        printf("\n4. Sum of Digits");
        printf("\n5. Reverse");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                evenOdd(n);
                break;

            case 2:
                prime(n);
                break;

            case 3:
                palindrome(n);
                break;

            case 4:
                sumDigits(n);
                break;

            case 5:
                reverse(n);
                break;

            case 6:
                printf("Program Ended");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 6);

    return 0;
}