#include<stdio.h>
#include<string.h>

struct book
{
    char name[100];
    int pages;
    float price;
};

int main()
{
    struct book b1,b2;

    strcpy(b1.name,"ABC");
    b1.pages=200;
    b1.price=250.0;

    b2=b1;

    printf("NAME OF BOOK 1:%s\nNAME OF BOOK 2:%s\n",b1.name,b2.name);
    printf("NO.OF PAGES OF BOOK 1:%d\nNO.OF PAGES OF BOOK 2:%d\n",b1.pages,b2.pages);
    printf("PRICE OF BOOK 1:%f\nPRICE OF BOOK 2:%f\n",b1.price,b2.price);

    return 0;
}