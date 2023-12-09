#include<stdio.h>
int main()
{
    int a=10,b=5;
    int temp;
     printf("VALUES BEFORE SWAPPING: \n");
    printf("A = %d \n",a);
    printf("B = %d \n",b);
     printf("VALUES AFTER SWAPPING: \n");
    temp=a;
    a=b;
    b=temp;
    printf("A = %d \n",a);
    printf("B = %d \n",b);

    return 0;
}