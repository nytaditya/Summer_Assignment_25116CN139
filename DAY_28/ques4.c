#include<stdio.h>

int main()
{
    char name[30];
    char email[50];
    long long phone;

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Phone Number: ");
    scanf("%lld",&phone);

    printf("Enter Email: ");
    scanf("%s",email);

    printf("\n--- Contact Details ---\n");
    printf("Name : %s\n",name);
    printf("Phone : %lld\n",phone);
    printf("Email : %s\n",email);

    return 0;
}