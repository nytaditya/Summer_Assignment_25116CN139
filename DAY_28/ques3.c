#include<stdio.h>

int main()
{
    char name[30];
    int seats;
    float price,total;

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Number of Seats: ");
    scanf("%d",&seats);

    price=250;
    total=seats*price;

    printf("\n----- Ticket -----\n");
    printf("Name : %s\n",name);
    printf("Seats : %d\n",seats);
    printf("Total Amount : %.2f\n",total);

    return 0;
}