#include<stdio.h>

struct book
{
    char name[10];
    char author[10];
    int call_no;
};

void display(char *,char *,int);

int main()
{
    struct book b1;

    printf("ENTER BOOK NAME:");
    scanf("%s",b1.name);
    printf("ENTER AUTHOR NAME:");
    scanf("%s",b1.author);
    printf("ENTER CALL NUMBER:");
    scanf("%d",&b1.call_no);
    display(b1.name,b1.author,b1.call_no);

    return 0;

}

void display(char *name,char *author,int call_no)
{
    printf("\nBOOK DATA:\n");
    printf("NAME:%s\n",name);
    printf("AUTHOR:%s\n",author);
    printf("CALL NUMBER:%d\n",call_no);
}