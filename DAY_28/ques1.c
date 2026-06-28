#include<stdio.h>

int main()
{
    int id;
    char book[30],author[30];

    printf("Enter Book ID: ");
    scanf("%d",&id);

    printf("Enter Book Name: ");
    scanf("%s",book);

    printf("Enter Author Name: ");
    scanf("%s",author);

    printf("\n--- Library Record ---\n");
    printf("Book ID : %d\n",id);
    printf("Book Name : %s\n",book);
    printf("Author : %s\n",author);

    return 0;
}