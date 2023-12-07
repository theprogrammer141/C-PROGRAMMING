#include<stdio.h>
void swap_by_reference(int *,int *);
int main()
{
    int a=10;
    int b=20;
    swap_by_reference(&a,&b);
    printf("VALUE OF A=%u,VALUE OF B=%u\n",a,b);
    return 0;
}
void swap_by_reference(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("VALUE OF X=%u,VALUE OF Y=%u\n",*x,*y);
}