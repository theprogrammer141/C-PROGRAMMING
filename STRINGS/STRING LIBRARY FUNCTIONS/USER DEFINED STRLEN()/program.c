#include<stdio.h>
int xstrlen(char *);
int main()
{
    char str[]="BAMBOOZLED";
    int len1,len2;

    len1=xstrlen(str);
    len2=xstrlen("HUMPTY DUMPTY");

    printf("STRING = %s,LENGTH = %d\n",str,len1);
    printf("STRING = %s,LENGTH = %d\n","HUMPTY DUMPTY",len2);

    return 0;
    
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