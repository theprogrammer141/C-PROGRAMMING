#include<stdio.h>
void xstrcpy(char *,const char *);
int main()
{
    char source[]="SAYONARA";
    char target[20];

    xstrcpy(target,source);

    printf("SOURCE = %s\n",source);
    printf("TARGET = %s\n",target);

    return 0;
}
void xstrcpy(char *t,const char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}