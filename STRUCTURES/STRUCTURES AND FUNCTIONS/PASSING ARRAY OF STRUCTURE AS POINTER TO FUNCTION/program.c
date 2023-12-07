#include<stdio.h>

struct book
{
    char name[50];
    int pages;
    float price;
};

void inputdata(struct book *);
void outputdata(struct book *);

int main()
{
    struct book b[3];
    struct book *ptr;
    ptr=&b;
    inputdata(ptr);
    printf("\nBOOKS INFORMATION:-\n");
    outputdata(ptr);

    return 0;
}

void inputdata(struct book *b)
{
    for(int i=0;i<3;i++)
    {
    printf("ENTER NAME OF BOOK[%d]:",i);
    scanf("%s",b->name);
    printf("ENTER NO.OF PAGES OF BOOK[%d]:",i);
    scanf("%d",&b->pages);
    printf("ENTER PRICE OF BOOK[%d]:",i);
    scanf("%f",&b->price);
    printf("\n");
    }
}

void outputdata(struct book *b)
{
    for(int i=0;i<3;i++)
    {
        printf("NAME OF BOOK[%d] : %s\n",i,b->name);
        printf("NO.OF PAGES OF BOOK[%d] : %d\n",i,b->pages);
        printf("PRICE OF BOOK[%d] : %.2f\n",i,b->price);
        printf("\n");
    }
}