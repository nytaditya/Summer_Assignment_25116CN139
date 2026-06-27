#include<stdio.h>

int main()
{
    int ans,score=0;

    printf("Q1. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n");
    scanf("%d",&ans);

    if(ans==3)
        score++;

    printf("\nQ3. Which language is mainly used for Android app development?\n");
    printf("1. Java\n2. Python\n3. HTML\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("\nYour Score = %d/3",score);

    return 0;
}