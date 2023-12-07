#include<stdio.h>
float celsiustofahrenheit(float celsius);
int main()
{
    float tempincelsius=32.5;
    printf("TEMPERATURE IN FAHRENHEIT = %f",celsiustofahrenheit(tempincelsius));
    return 0;
}
float celsiustofahrenheit(float celsius)
{
    printf("ENTER TEMPERATURE IN CELSIUS:");
    scanf("%f",&celsius);
    float fahrenheit;
    fahrenheit=(celsius*9/2)+32;
    return fahrenheit;
}