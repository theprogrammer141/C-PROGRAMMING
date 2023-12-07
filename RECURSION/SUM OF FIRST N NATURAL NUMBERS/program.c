#include<stdio.h>
int  sumofnaturalnumbers(int n);
int main()
{
    printf("SUM = %d",sumofnaturalnumbers(5));
    return 0;
}
int sumofnaturalnumbers(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNm1=sumofnaturalnumbers(n-1);
    int sumN=sumofnaturalnumbers(n-1)+n;
    return sumN;
}