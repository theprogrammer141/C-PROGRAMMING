#include<stdio.h>
int main()
{
    float fahrenheit_temp,celsius_temp;
    printf("ENTER TEMPERATURE IN FAHRENHEIT:");
    scanf("%f",fahrenheit_temp);
    celsius_temp=(fahrenheit_temp-32)*5/9;
    printf("CELSIUS TEMPERTURE : %f",celsius_temp);
    return 0;
}