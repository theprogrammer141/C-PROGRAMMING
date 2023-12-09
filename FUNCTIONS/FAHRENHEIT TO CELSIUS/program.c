#include<stdio.h>
float fahrenheit_to_celsius(float);
int main()
{
    float temp_in_fahrenheit;
    printf("ENTER TEMPERATURE IN FAHRENHEIT:");
    scanf("%f",&temp_in_fahrenheit);
    fahrenheit_to_celsius(temp_in_fahrenheit);
    return 0;

}
float fahrenheit_to_celsius(float temp)
{
    float celsius;
    celsius=(5/9)*(temp-32);
    printf("TEMPERATURE IN CELSIUS: %f\n",celsius);
    return celsius;
}