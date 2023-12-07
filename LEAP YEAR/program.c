#include<stdio.h>
int main()
{
    int year;
    printf("ENTER ANY YEAR:");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("%d IS A LEAP YEAR",year);
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("%d IS A LEAP YEAR",year);
    }
    else
    {
        printf("NOT A LEAP YEAR");
    }

    return 0;
}