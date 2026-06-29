#include<stdio.h>

int main()
{
    int a[100],n,i,ch,sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n1. Display");
    printf("\n2. Sum");
    printf("\n3. Largest");

    printf("\nEnter choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    else if(ch==2)
    {
        for(i=0;i<n;i++)
            sum=sum+a[i];

        printf("Sum = %d",sum);
    }
    else if(ch==3)
    {
        int max=a[0];

        for(i=1;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }

        printf("Largest = %d",max);
    }
    else
        printf("Invalid choice");

    return 0;
}