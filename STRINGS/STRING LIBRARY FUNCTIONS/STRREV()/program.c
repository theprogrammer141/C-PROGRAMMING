#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40];

    printf("ENTER A STRING:");
    gets(str1);

    strrev(str1);
    printf("REVERSED STRING=%s",str1);
    
    return 0;
}