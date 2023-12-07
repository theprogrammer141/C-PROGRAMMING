#include<stdio.h>
int main()
{
    int discount=0;
    int quantity;
    int rate_per_item;
    double total;
    printf("ENTER QUANTITY:");
    scanf("%d",&quantity);
    printf("ENTER RATE PER ITEM:");
    scanf("%d",&rate_per_item);

    if(quantity>1000)
    {
        discount=10;
    }

    printf("TOTAL EXPENSE:");
    total=quantity*rate_per_item-quantity*rate_per_item*discount/100;
    printf("%.2lf",total);

    return 0;

}