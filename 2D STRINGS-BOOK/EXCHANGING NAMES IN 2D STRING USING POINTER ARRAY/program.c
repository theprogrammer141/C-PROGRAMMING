#include<stdio.h>
int main()
{
    char *names[]={
                    "HUZAIFA",
                    "ABDULLAH",
                    "BILAL",
                    "MUSTAFA",
                    "ALI"
                };

    printf("ORIGINAL NAMES:%s\n%s\n",names[2],names[3]);

    char *temp;
    temp=names[2];
    names[2]=names[3];
    names[3]=temp;

    printf("CHANGED NAMES:%s\n%s\n",names[2],names[3]);
    return 0;
}