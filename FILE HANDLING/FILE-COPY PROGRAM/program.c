#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs,*ft;
    char ch;

    fs=fopen("source.txt","r");
    if(fs==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    ft=fopen("target.txt","w");
    if(ft=NULL)
    {
        printf("FILE NOT FOUND!");
        fclose(fs);
        exit(2);
    }

    while(ch!=EOF)
    {
        ch=fgetc(fs);
        fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);

    return 0;
}