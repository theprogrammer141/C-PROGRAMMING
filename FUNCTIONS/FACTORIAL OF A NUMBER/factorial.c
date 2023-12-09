#include<stdio.h>
int factorial(int number);
int main()
{
    int num;
    factorial(num);
    return 0;
}
int factorial(int number)
{
    int fact=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("FACTORIAL OF %d = %d",number,fact);
    return fact;
}