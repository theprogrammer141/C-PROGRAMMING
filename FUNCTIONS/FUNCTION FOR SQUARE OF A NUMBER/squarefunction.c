#include<stdio.h>
float square(float x);
int main()
{
    float a,b;
    printf("ENTER A NUMBER:");
    scanf("%f",&a);
    b=square(a);
    printf("SQUARE OF %.1f = %.1f\n",a,b);
    return 0;
}
float square (float x)
{
    float y;
    y=x*x;
    return y;
}