#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int tab=0,spaces=0,newline=0;

    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        if(ch=='\t')
        {
            tab++;
        }
        if(ch==' ')
        {
            spaces++;
        }
        if(ch=='\n')
        {
            newline++;
        }
    }
    fclose(fp);

    printf("TABS = %d\n",tab);
    printf("SPACES = %d\n",spaces);
    printf("NEWLINE = %d\n",newline);

    return 0;
}