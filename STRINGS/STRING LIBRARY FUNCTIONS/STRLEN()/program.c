#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="BAMBOOZLED";
    int len1,len2;

    len1=strlen(str);
    len2=strlen("HUMPTY DUMPTY");

    printf("string = %s,length = %d\n",str,len1);
    printf("string = %s,length = %d\n","HUMPTY DUMPTY",len1);

    return 0;
    
}