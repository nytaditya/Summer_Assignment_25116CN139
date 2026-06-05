#include<stdio.h>

int main()
{
    int n,a[20],i=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }

    printf("Binary = ");

    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);

    return 0;
}