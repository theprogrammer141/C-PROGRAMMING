#include<stdio.h>

struct book
{
    char name[100];
    int pages;
    float price;
};

int main()
{
    struct book b1,b2;

    printf("ENTER NAME OF BOOK 1=");
    gets(b1.name);
    printf("ENTER NO.OF PAGES OF BOOK 1=");
    scanf("%d",&b1.pages);
    printf("ENTER PRICE OF BOOK 1=");
    scanf("%f",&b1.price);

    printf("ENTER NAME OF BOOK 2=");
    scanf("%s",b2.name);
    printf("ENTER NO.OF PAGES OF BOOK 2=");
    scanf("%d",&b2.pages);
    printf("ENTER PRICE OF BOOK 2=");
    scanf("%f",&b2.price);

    printf("NAME OF BOOK 1=%s\nNAME OF BOOK 2=%s\n",b1.name,b2.name);
    printf("NO.OF PAGES OF BOOK 1=%d\nNO.OF PAGES OF BOOK 2=%d\n",b1.pages,b2.pages);
    printf("PRICE OF BOOK 1=%f\nPRICE OF BOOK 2=%f",b1.price,b2.price);

    return 0;
}