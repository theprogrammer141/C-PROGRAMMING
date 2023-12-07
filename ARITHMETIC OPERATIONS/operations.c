#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter integer a:");
    scanf("%d",&a);
    printf("Enter integer b:");
    scanf("%d",&b);
    int sum=a+b;
    printf("Sum is = %d \n",sum);
    int subtraction=a-b;
    printf("Subtraction is = %d \n",subtraction);
    int multiplication=a*b;
    printf("Multiplication is = %d \n",multiplication);
    int division=a/b;
    printf("Division is = %d \n",division);
    int remainder=a%b;
    printf("Remainder is = %d \n",remainder);
    return 0;
}