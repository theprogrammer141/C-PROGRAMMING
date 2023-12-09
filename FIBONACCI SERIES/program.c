#include<stdio.h>
int main()
{
    int number,a=0,b=1,c;
    printf("ENTER NUMBER OF TERMS:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}