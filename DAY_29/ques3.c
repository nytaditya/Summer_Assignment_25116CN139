#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int ch;

    printf("Enter string: ");
    gets(str);

    printf("\n1. Length");
    printf("\n2. Reverse");
    printf("\n3. Uppercase");

    printf("\nEnter choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("Length = %d",strlen(str));
    }
    else if(ch==2)
    {
        int i;

        for(i=strlen(str)-1;i>=0;i--)
            printf("%c",str[i]);
    }
    else if(ch==3)
    {
        int i;

        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
        }

        printf("%s",str);
    }
    else
        printf("Invalid choice");

    return 0;
}