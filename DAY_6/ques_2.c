#include<stdio.h>

int main()
{
    int n,rem,base=1,dec=0;

    printf("Enter binary number: ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        dec=dec+rem*base;
        base=base*2;
        n=n/10;
    }

    printf("Decimal = %d",dec);

    return 0;
}