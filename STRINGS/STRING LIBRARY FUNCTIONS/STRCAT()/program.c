#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="FOLKS";
    char target[20]="HELLO ";

    strcat(target,source);

    printf("STRING = %s\n",source);
    printf("TARGET = %s\n",target);

    return 0;
}