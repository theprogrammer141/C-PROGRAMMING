#include<stdio.h>

void checkkar(char [],char);

int main()
{
    char str[50],ch;

    printf("ENTER A STRING:");
    fgets(str,50,stdin);

    printf("ENTER THE CHARACTER WHICH YOU WISH\nTO FIND:");
    scanf(" %c",&ch);

    checkkar(str,ch);

    return 0;
}

void checkkar(char str[],char ch)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("CHARACTER FOUND IN STRING!");
            return;
        }
    }
    if(str[i]!=ch)
    {
        printf("CHARACTER NOT FOUND!");
    }
}