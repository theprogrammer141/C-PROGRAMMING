#include<stdio.h>

struct book
{
    char name[10];
    char author[10];
    int call_no;
};

void display(struct book*);

int main()
{
    struct book b;

    printf("ENTER BOOK NAME:");
    scanf("%s",b.name);
    printf("ENTER AUTHOR NAME:");
    scanf("%s",b.author);
    printf("ENTER CALL NUMBER:");
    scanf("%d",&b.call_no);

    display(&b);

    return 0;
}

void display(struct book *b)
{
    printf("\nBOOK DATA\n");
    printf("NAME:%s\n",b->name);
    printf("AUTHOR:%s\n",b->author);
    printf("CALL NUMBER:%d",b->call_no);
}