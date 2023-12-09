#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n=5;
    printf(("FIB OF %d = %d"),n,fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibNm1=fibonacci(n-1);
    int fibNm2=fibonacci(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}