#include<stdio.h>
#include<math.h>
int main()
{
    int number,absolute_value;
    printf("ENTER A NUMBER:");
    scanf("%d",&number);

    absolute_value=abs(number);
    printf("ABSOLUTE VALUE OF %d IS: %d",number,absolute_value);

    return 0;
}