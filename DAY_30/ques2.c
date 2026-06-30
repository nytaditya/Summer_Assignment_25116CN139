#include<stdio.h>

int main()
{
    int id[3],i;
    char book[3][30];

    for(i=0;i<3;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&id[i]);

        printf("Book Name: ");
        scanf("%s",book[i]);
    }

    printf("\nLibrary Records\n");

    for(i=0;i<3;i++)
    {
        printf("ID : %d\n",id[i]);
        printf("Book : %s\n\n",book[i]);
    }

    return 0;
}