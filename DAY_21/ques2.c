#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter string: ");
    gets(str);

    while(str[i]!='\0')
        i++;

    printf("Reverse string: ");

    for(i=i-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}