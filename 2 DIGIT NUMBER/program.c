#include<stdio.h>
int main()
{
    int x;
    printf("ENTER A NUMBER:");
    scanf("%d",&x);
    printf("%d \n",x>9 && x<100);
    return 0;
}