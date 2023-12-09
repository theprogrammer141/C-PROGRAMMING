#include<stdio.h>
void circularshift(int *,int *,int *);
int main()
{
    int x,y,z;
    
    printf("ENTER VALUE OF X:");
    scanf("%d",&x);
    printf("ENTER VALUE OF Y:");
    scanf("%d",&y);
    printf("ENTER VALUE OF Z:");
    scanf("%d",&z);

    circularshift(&x,&y,&z);
    printf("Y = %d\nZ = %d\nX = %d\n",y,z,x);

    return 0;
}
void circularshift(int *a,int *b,int *c)
{
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
}