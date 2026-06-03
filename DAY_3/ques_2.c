#include <stdio.h>

int main()
{
int n, i, j, count;
printf("Enter N: ");
scanf("%d", &n);
printf("Prime Numbers are:\n");
 for(i = 2; i <= n; i++)
 {
count = 0;
    for(j = 2; j < i; j++)
        {
        if(i % j == 0)
        {
            count = 1;
            break;
        }
        }

    if(count == 0)
        printf("%d ", i);
    }

    return 0;
}