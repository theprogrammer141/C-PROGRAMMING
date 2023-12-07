#include<stdio.h>
void calculateprice(float value);
int main()
{
    float value;
    printf("ENTER VALUE:");
    scanf("%f",&value);
    calculateprice(value);
    printf("PRICE = %f",value);
    return 0;
}

void calculateprice(float value)
{
    value=value+0.18*value;
    printf("PRICE = %f\n",value);
}