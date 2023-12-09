#include<stdio.h>
void xstrrev(char []);
int xstrlen(char *);
int main()
{
    char str[40];
    xstrrev(str);
    return 0;
}
void xstrrev(char str[40])
{
    int length;
    char ch;

    printf("ENTER A STRING:");
    gets(str);

    length=xstrlen(str);

    for(int i=0;i<length/2;i++)
    {
        ch=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=ch;
    }

    printf("REVERSED STRING = %s",str);
}
int xstrlen(char *s)
{
    int length=0;

    while(*s!='\0')
    {
        length++;
        s++;
    }

    return length;
}