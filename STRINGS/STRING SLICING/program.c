#include<stdio.h>

void slice(char [],int,int);

int main()
{
    char str[50];
    int n,m;
    slice(str,n,m);

    return 0;
}

void slice(char str[],int n,int m)
{
    printf("ENTER A STRING:");
    fgets(str,50,stdin);

    printf("ENTER STARTING INDEX:");
    scanf("%d",&n);
    printf("ENTER ENDING INDEX:");
    scanf("%d",&m);

    int i,j;
    char newstr[50];
    for(i=n,j=0;i<=m;i++,j++)
    {
        newstr[j]=str[i];
    }
    newstr[j]='\0';

    printf("SLICED STRING:%s",newstr);
}