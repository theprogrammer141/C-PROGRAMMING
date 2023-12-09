#include<stdio.h>
#include<string.h>
void xstrcat(char [],char []);
int main()
{
    char str1[40];
    char str2[40];

    printf("ENTER STRING 1:");
    gets(str1);
    printf("ENTER STRING 2:");
    gets(str2);
    xstrcat(str1,str2);
    printf("CONCATENATED STRING:%s",str1);
    return 0;
}
void xstrcat(char str1[40],char str2[40])
{
    int i,len=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }

    for(i=0;str2[i]!='\0';i++)
    {
        str1[len+i]=str2[i];
    }
    str1[len+i]='\0';
}