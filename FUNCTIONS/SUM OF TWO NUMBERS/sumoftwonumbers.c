#include<stdio.h>
int sum(int,float);
int main()
{
    int num1;
    float num2;

    printf("ENTER FIRST NUMBER:");
    scanf("%d",&num1);
    printf("ENTER SECOND NUMBER:");
    scanf("%f",&num2);
    sum(num1,num2);
    return 0;
}
int sum(int n1,float n2)
{
    float result;
    result=n1+n2;
    printf("RESULT = %f",result);
    return result;
}