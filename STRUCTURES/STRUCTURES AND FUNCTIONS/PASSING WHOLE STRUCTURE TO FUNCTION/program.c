#include<stdio.h>

struct book
{
    char name[10];
    char author[10];
    int call_no;
};

void display(struct book);

int main()
{
    struct book b1;

    printf("ENTER BOOK NAME:");
    scanf("%s",b1.name);
    printf("ENTER AUTHOR NAME:");
    scanf("%s",b1.author);
    printf("ENTER CALL NUMBER:");
    scanf("%d",&b1.call_no);

    display(b1);

    return 0;
}

void display(struct book b1)
{
    printf("\nBOOK DATA:-\n");
    printf("NAME:%s\n",b1.name);
    printf("AUTHOR:%s\n",b1.author);
    printf("CALL NUMBER:%d",b1.call_no);
}