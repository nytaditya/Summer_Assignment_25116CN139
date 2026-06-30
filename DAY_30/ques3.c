#include<stdio.h>

int main()
{
    int id[3],i;
    char name[3][30];
    float salary[3];

    for(i=0;i<3;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&id[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Salary: ");
        scanf("%f",&salary[i]);
    }

    printf("\nEmployee Details\n");

    for(i=0;i<3;i++)
    {
        printf("\nID : %d\n",id[i]);
        printf("Name : %s\n",name[i]);
        printf("Salary : %.2f\n",salary[i]);
    }

    return 0;
}