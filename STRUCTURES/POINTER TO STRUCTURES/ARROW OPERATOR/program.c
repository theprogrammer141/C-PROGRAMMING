#include<stdio.h>

struct book
{
    char name[50];
    int pages;
    float price;
};

int main()
{
    struct book b1,b2;
    struct book *ptr1,*ptr2;
    ptr1=&b1;
    ptr2=&b2;

    printf("ENTER NAME OF BOOK 1:");
    scanf("%s",ptr1->name);
    printf("ENTER PAGES OF BOOK 1:");
    scanf("%d",&ptr1->pages);
    printf("ENTER PRICE OF BOOK 1:");
    scanf("%f",&ptr1->price);

    printf("ENTER NAME OF BOOK 2:");
    scanf("%s",ptr2->name);
    printf("ENTER PAGES OF BOOK 2:");
    scanf("%d",&ptr2->pages);
    printf("ENTER PRICE OF BOOK 2:");
    scanf("%f",&ptr2->price);

    printf("\nBOOK 1 DATA:\n");
    printf("NAME:%s\n",ptr1->name);
    printf("NO.OF PAGES:%d\n",ptr1->pages);
    printf("PRICE:%f\n",ptr1->price);

    printf("\nBOOK 2 DATA:\n");
    printf("NAME:%s\n",ptr2->name);
    printf("NO.OF PAGES:%d\n",ptr2->pages);
    printf("PRICE:%f\n",ptr2->price);

    return 0;
    
}