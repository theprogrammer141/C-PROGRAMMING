#include<stdio.h>
int factorial(int number);
int main()
{
    printf("FACTORIAL OF NUMBER = %d",factorial(5));
    return 0;
}
int factorial(int number)
{
    if(number==0)
    {
        return 1;
    }
    int factNm1=factorial(number-1);
    int factN=factNm1*number;
    return factN;
}