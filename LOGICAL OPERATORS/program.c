#include<stdio.h>
int main()
{
    int isSunday=1;
    int isSnowing=1;
    printf("%d \n",isSunday && isSnowing);

    int isMonday=1;
    int isRaining=0;
    printf("%d \n",isMonday || isRaining);

    return 0;
}