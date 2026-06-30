#include<stdio.h>

void display(int roll[],char name[][30],float marks[],int n)
{
    int i;

    printf("\nStudent Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll : %d\n",roll[i]);
        printf("Name : %s\n",name[i]);
        printf("Marks : %.2f\n",marks[i]);
    }
}

int main()
{
    int roll[3],i;
    char name[3][30];
    float marks[3];

    for(i=0;i<3;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Marks: ");
        scanf("%f",&marks[i]);
    }

    display(roll,name,marks,3);

    return 0;
}