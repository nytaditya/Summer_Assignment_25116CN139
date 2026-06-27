#include<stdio.h>

int main()
{
    int roll;
    char name[30];
    float marks;

    printf("Enter Roll No: ");
    scanf("%d",&roll);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Marks: ");
    scanf("%f",&marks);

    printf("\n----- Student Record -----\n");
    printf("Roll No : %d\n",roll);
    printf("Name : %s\n",name);
    printf("Marks : %.2f\n",marks);

    return 0;
}