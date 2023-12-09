#include<stdio.h>
int main()
{
    char gender;
    int years_of_service,qualification,salary;
    printf("ENTER GENDER:");
    scanf("%c",&gender);
    printf("ENTER YEARS OF SERVICE:");
    scanf("%d",&years_of_service);
    printf("ENTER QUALIFICATION:");
    scanf("%d",&qualification);

    if(gender=='M' && years_of_service>=10 && qualification==1)
    {
        salary=15000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='M' && years_of_service>=10 && qualification==0)
    {
        salary=10000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='M' && years_of_service<10 && qualification==1)
    {
        salary=10000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='M' && years_of_service<10 && qualification==0)
    {
        salary=7000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='F' && years_of_service>=10 && qualification==1)
    {
        salary=12000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='M' && years_of_service>=10 && qualification==0)
    {
        salary=9000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='F' && years_of_service<10 && qualification==1)
    {
        salary=10000;
        printf("SALARY = %d",salary);
    }
    else if(gender=='F' && years_of_service<10 && qualification==0)
    {
        salary=6000;
        printf("SALARY = %d",salary);
    }

    return 0;
}