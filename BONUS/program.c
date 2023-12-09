#include<stdio.h>
int main()
{
    int current_year,joining_year,years_of_service,bonus=2500;
    printf("ENTER CURRENT YEAR:");
    scanf("%d",&current_year);
    printf("ENTER JOINING YEAR:");
    scanf("%d",&joining_year);
    years_of_service=current_year-joining_year;
    printf("YEARS OF SERVICE:%d \n",years_of_service);
    if(years_of_service>3)
    {
        printf("BONUS = RS. %d",bonus);
    }
    else
    {
        printf("NO BONUS");
    }

    return 0;

}