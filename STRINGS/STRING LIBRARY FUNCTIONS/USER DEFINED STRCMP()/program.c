#include<stdio.h>
#include<string.h>
int xstrcmp(char [],char []);
int main()
{
    char str1[40];
    char str2[40];
    int result;

    printf("ENTER STRING 1:");
    gets(str1);
    printf("ENTER STRING 2:");
    gets(str2);

    result=xstrcmp(str1,str2);
    return 0;

}
int xstrcmp(char str1[],char str2[])
{
    int i,flag=0;

    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("STRINGS ARE SAME!");
    }
    else
    {
        printf("STRINGS ARE NOT SAME!");
    }

    return 0;
}