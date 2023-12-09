#include<stdio.h>
int main()
{
    double cost_price,selling_price,profit,loss;
    printf("ENTER COST PRICE:");
    scanf("%lf",&cost_price);
    printf("ENTER SELLING PRICE:");
    scanf("%lf",&selling_price);
    
    if(selling_price>cost_price)
    {
        printf("YOU MADE PROFIT\n");
        profit=selling_price-cost_price;
        printf("PROFIT = %lf",profit);
    }
    else if(cost_price>selling_price)
    {
        printf("YOU INCURRED LOSS \n");
        loss=cost_price-selling_price;
        printf("LOSS = %lf",loss);
    }

    return 0;
}