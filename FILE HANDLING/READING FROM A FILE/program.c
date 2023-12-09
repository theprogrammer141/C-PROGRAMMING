#include<stdio.h>
int main()
{
    FILE *fp;
    char c;

    fp=fopen("program.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }
    else
    {
        while(c!=EOF)
        {
            c=fgetc(fp);
            printf("%c\n",c);
        }
    }
    fclose(fp);
    return 0;
}