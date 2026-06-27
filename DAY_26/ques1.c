#include<stdio.h>

int main()
{
    int guess;
    int number=25;

    printf("Guess the number (1-50): ");

    while(1)
    {
        scanf("%d",&guess);

        if(guess==number)
        {
            printf("Correct Guess");
            break;
        }
        else if(guess<number)
            printf("Too Small, Try Again: ");
        else
            printf("Too Large, Try Again: ");
    }

    return 0;
}