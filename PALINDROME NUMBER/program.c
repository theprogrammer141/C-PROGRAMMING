#include<stdio.h>
int main()
{
    int number,remainder,sum=0,saved_number;
    printf("ENTER A NUMBER:");
    scanf("%d",&number);

    saved_number=number;

    while(number>0)
    {
        remainder=number%10;
        sum=remainder+(sum*10);
        number=number/10;
    }
    if(saved_number==sum)
    {
        printf("PALINDROME NUMBER\n");
    }
    else
    {
        printf("NOT PALINDROME\n");
    }
    return 0;
}