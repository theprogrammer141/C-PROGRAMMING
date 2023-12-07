#include<stdio.h>
double power(double a,double b);
int main()
{
    double number,pow;
     printf("ENTER A NUMBER:");
    scanf("%lf",&number);
    printf("ENTER POWER TO BE RAISED:");
    scanf("%lf",&pow);
    power(number,pow);
    printf("%.1lf RAISED TO THE POWER %.1lf = %.1lf",number,pow,power(number,pow));
    return 0;
}
double power(double a,double b)
{
    double num=1.0;
   
    while(b>0)
    {
        num=num*a;
        b--;
    }
    
    return num;
}