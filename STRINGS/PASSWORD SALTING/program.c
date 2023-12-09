#include<stdio.h>
#include<string.h>

void salting(char []);
void xstrcpy(char *,const char *);
void xstrcat(char [],char []);

int main()
{
    char password[100];
    printf("ENTER PASSWORD:");
    scanf("%s",password);

    salting(password);

    return 0;
}

void salting(char password[])
{
    char salt[50];
    char newpassword[200];

    printf("ENTER SALT:");
    scanf("%s",salt);
    
    xstrcpy(newpassword,password);
    xstrcat(newpassword,salt);

    printf("NEW PASSWORD:%s",newpassword);
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

void xstrcat(char str1[],char str2[])
{
    int length=0;
    int i;

    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;str2[i]!='\0';i++)
    {
        str1[length+i]=str2[i];
    }

    str1[length+i]='\0';
}