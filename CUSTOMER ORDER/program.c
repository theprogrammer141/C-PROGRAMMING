#include<stdio.h>
int main()
{
    int customer_order,has_credit,in_stock;
    
    printf("ENTER CUSTOMER ORDER:");
    scanf("%d",&customer_order);
    printf("ENTER CREDIT:");
    scanf("%d",&has_credit);
    printf("ENTER AVAILABLE STOCK:");
    scanf("%d",&in_stock);

    if(customer_order<=in_stock && customer_order==has_credit)
    {
        printf("ORDER CONFIRMED!");
    }
    else if(customer_order<=in_stock && has_credit!=customer_order)
    {
        printf("YOUR ORDER CANNOT BE COMPLETED\nBECAUSE THERE IS NOT ENOUGH CREDIT");    
    }
    else if(has_credit==customer_order && in_stock<customer_order)
    {
        printf("SUPPLIED STOCK:%d \n",in_stock);
        printf("WE DID NOT HAVE FULL STOCK\nSO WE SUPPLIED WHAT WAS IN STOCk");
    }

    return 0;
    
}