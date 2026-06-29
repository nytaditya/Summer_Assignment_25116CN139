#include<stdio.h>

int main()
{
    int id,qty;
    char item[30];
    float price,total;

    printf("Enter Item ID: ");
    scanf("%d",&id);

    printf("Enter Item Name: ");
    scanf("%s",item);

    printf("Enter Quantity: ");
    scanf("%d",&qty);

    printf("Enter Price: ");
    scanf("%f",&price);

    total=qty*price;

    printf("\n----- Inventory -----\n");
    printf("Item ID : %d\n",id);
    printf("Item Name : %s\n",item);
    printf("Quantity : %d\n",qty);
    printf("Price : %.2f\n",price);
    printf("Total Cost : %.2f\n",total);

    return 0;
}