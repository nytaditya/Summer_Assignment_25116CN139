#include<stdio.h>

int main()
{
    int a[100],n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }

    printf("Array elements are:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}