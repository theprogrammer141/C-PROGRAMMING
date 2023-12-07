#include<stdio.h>
int main()
{
    /*
    THIS PROGRAM WILL CALCULATE THE AREA AND
    CIRCUMFERENCE OF A CIRCLE.
    AREA OF A CIRCLE=PI*R*R
    CIRCUMFERENCE OF A CIRCLE=2*PR*R
    */

   double circle_area,cirumference,pi=3.141516,radius;
   printf("ENTER RADIUS OF CIRCLE:");
   scanf("%lf",&radius);
   circle_area=pi*radius*radius;
   cirumference=2*pi*radius;
   printf("AREA OF CIRCLE = %.2lf \n",circle_area);
   printf("CIRCUMFERENCE = %.2lf",cirumference);

   return 0;
}