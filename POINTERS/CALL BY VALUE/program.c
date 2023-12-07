#include<stdio.h>
void swap_by_value(int,int);
int main()
{
    int a=10;
    int b=20;
    swap_by_value(a,b);
    printf("VALUE OF A=%d,VALUE OF B=%d\n",a,b);
    return 0;   
}
void swap_by_value(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("VALUE OF X=%d,VALUE OF Y=%d\n",x,y);
}