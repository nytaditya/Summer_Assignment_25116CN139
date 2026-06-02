#include <stdio.h>

int main()
{
    int n, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}