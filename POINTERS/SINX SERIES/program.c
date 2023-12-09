#include<stdio.h>
#include<math.h>
double factorial(int);
void sinseriescalc(float,float *);
int main()
{
    float x,result=0;
    float radian;
    printf("ENTER X IN DEGREES:");
    scanf("%f",&x);

    radian=x*(3.1415/180.0);
    sinseriescalc(radian,&result);

    printf("sin(%.1f) = %.1f\n",x,result);

    return 0;
}
void sinseriescalc(float num,float *result)
{
    int n=1;
    int sign=1;
    for(int i=1;n<=10;i=i+2)
    {
        *result=*result + sign * (pow(num,i)/(double)factorial(i));
        sign=sign*-1;
        n++;
    }
}
double factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}