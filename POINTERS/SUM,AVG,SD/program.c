#include<stdio.h>
#include<math.h>
void calculation(float,float,float,float,float,float*,float*,float*,float*);
int main()
{
    float num1,num2,num3,num4,num5;
    float sum,average,variance,standard_deviation;

    printf("ENTER FIRST NUMBER:");
    scanf("%f",&num1);
    printf("ENTER SECOND NUMBER:");
    scanf("%f",&num2);
    printf("ENTER THIRD NUMBER:");
    scanf("%f",&num3);
    printf("ENTER FOURTH NUMBER:");
    scanf("%f",&num4);
    printf("ENTER FIFTH NUMBER:");
    scanf("%f",&num5);

    calculation(num1,num2,num3,num4,num5,&sum,&average,&variance,&standard_deviation);

    printf("SUM = %.2f\n",sum);
    printf("AVERAGE = %.2f\n",average);
    printf("VARIANCE = %.2f\n",variance);
    printf("STANDARD DEVIATION = %.2f\n",standard_deviation);

    return 0;
}
void calculation(float n1,float n2,float n3,float n4,float n5,float *sum,float *average,
float *variance,float *standard_deviation)
{
    *sum=n1+n2+n3+n4+n5;
    *average=*sum/5.0;

    *variance+=pow((n1-*average),2);
    *variance+=pow((n2-*average),2);
    *variance+=pow((n3-*average),2);
    *variance+=pow((n4-*average),2);
    *variance+=pow((n5-*average),2);

    *standard_deviation=sqrt(*variance);
}