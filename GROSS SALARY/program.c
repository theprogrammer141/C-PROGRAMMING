#include<stdio.h>
int main()
{
   float basic_salary,gross_salary,dearness_allowance,house_rent_allowance;
   
   printf("ENTER BASIC SALARY:");
   scanf("%f",&basic_salary);

   if(basic_salary<1500)
   {
        house_rent_allowance=basic_salary*10/100;
        dearness_allowance=basic_salary*90/100;
   }
   else
   {
        house_rent_allowance=500;
        dearness_allowance=basic_salary*98/100;
   }

   gross_salary=basic_salary+dearness_allowance+house_rent_allowance;
   printf("GROSS SALARY = %f",gross_salary);

   return 0;
}