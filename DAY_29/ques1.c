#include<stdio.h>

int main()
{
    int ch;
    float a,b;

    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");

    printf("\nEnter choice: ");
    scanf("%d",&ch);

    if(ch==1)
        printf("Answer = %.2f",a+b);
    else if(ch==2)
        printf("Answer = %.2f",a-b);
    else if(ch==3)
        printf("Answer = %.2f",a*b);
    else if(ch==4)
    {
        if(b!=0)
            printf("Answer = %.2f",a/b);
        else
            printf("Cannot divide by zero");
    }
    else
        printf("Invalid choice");

    return 0;
}