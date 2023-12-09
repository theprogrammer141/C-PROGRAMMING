#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    if(a<b)
    {
        printf("A IS SMALLEST");
    }
    else
    {
        printf("B IS SMALLEST");
    }

    return 0;
}