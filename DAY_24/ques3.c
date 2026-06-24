#include<stdio.h>

int main()
{
    char str[200];
    char longest[100];
    int i=0,j=0,max=0,start=0,len=0;

    printf("Enter sentence: ");
    gets(str);

    while(1)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(len>max)
            {
                max=len;

                for(j=0;j<len;j++)
                    longest[j]=str[start+j];

                longest[j]='\0';
            }

            start=i+1;
            len=0;
        }
        else
        {
            len++;
        }

        if(str[i]=='\0')
            break;

        i++;
    }

    printf("Longest word = %s",longest);

    return 0;
}