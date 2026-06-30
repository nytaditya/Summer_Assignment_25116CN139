#include<stdio.h>

int main()
{
    int roll[5],i;
    char name[5][30];
    float marks[5];

    for(i=0;i<5;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Marks: ");
        scanf("%f",&marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i=0;i<5;i++)
    {
        printf("\nRoll : %d\n",roll[i]);
        printf("Name : %s\n",name[i]);
        printf("Marks : %.2f\n",marks[i]);
    }

    return 0;
}