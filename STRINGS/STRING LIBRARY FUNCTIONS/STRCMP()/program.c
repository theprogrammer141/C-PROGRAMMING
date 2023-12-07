#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="JERRY";
    char str2[]="FERRY";
    int i,j,k;

    i=strcmp(str1,"JERRY");
    j=strcmp(str1,str2);
    k=strcmp(str1,"JERRY BOY");

    printf("%d,%d,%d",i,j,k);

    return 0;
}