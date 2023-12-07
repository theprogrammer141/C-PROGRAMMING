#include<stdio.h>
int main()
{
    int a=12,b=14;
    printf("VALUES BEFORE SWAPPING: \n");
    printf("A = %d \n",a);
    printf("B = %d \n",b);
    printf("VALUES AFTER SWAPPING: \n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A = %d \n",a);
    printf("B = %d \n",b);

    return 0;
}