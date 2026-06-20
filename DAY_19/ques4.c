#include<stdio.h>

int main()
{
    int a[10][10];
    int n,i,j;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Diagonal elements are:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i][i]);

    return 0;
}