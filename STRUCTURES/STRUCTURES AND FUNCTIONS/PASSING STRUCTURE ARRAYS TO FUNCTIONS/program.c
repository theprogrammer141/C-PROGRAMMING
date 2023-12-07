#include<stdio.h>

struct book
{
    char name[100];
    int pages;
    float price;
};

void inputdata(struct book []);
void outputdata(struct book []);

int main()
{
    struct book b[3];
    inputdata(b);
    printf("\nBOOKS INFORMATION:-\n");
    outputdata(b);

    return 0;
}

void inputdata(struct book b[])
{
    for(int i=0;i<3;i++)
    {
        printf("ENTER NAME OF BOOK[%d]:",i);
        gets(b[i].name);
        printf("ENTER NO.OF PAGES OF BOOK[%d]:",i);
        scanf("%d",&b[i].pages);
        printf("ENTER PRICE OF BOOK[%d]:",i);
        scanf("%f",&b[i].price);
        printf("\n");
    }
}

void outputdata(struct book b[])
{
    for(int i=0;i<3;i++)
    {
        printf("NAME OF BOOK[%d] : %s\n",i,b[i].name);
        printf("NO.OF PAGES OF BOOK[%d] : %d\n",i,b[i].pages);
        printf("PRICE OF BOOK[%d] : %.2f\n",i,b[i].price);
        printf("\n");
    }
}