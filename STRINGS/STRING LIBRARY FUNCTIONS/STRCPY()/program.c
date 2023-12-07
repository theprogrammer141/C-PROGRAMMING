#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="SAYONARA";
    char target[20];

    strcpy(target,source);

    printf("SOURCE = %s\n",source);
    printf("TARGET = %s\n",target);

    return 0;
}