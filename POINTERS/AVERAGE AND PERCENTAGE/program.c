#include<stdio.h>
void avgandpercent(float,float,float,float *,float *,float *);
int main()
{
    float subject1,subject2,subject3;
    float sum,average,percentage;

    printf("ENTER SUBJECT 1 MARKS:");
    scanf("%f",&subject1);
    printf("ENTER SUBJECT 2 MARKS:");
    scanf("%f",&subject2);
    printf("ENTER SUBJECT 3 MARKS:");
    scanf("%f",&subject3);
    
    avgandpercent(subject1,subject2,subject3,&sum,&average,&percentage);

    printf("AVERAGE = %.1f\n",average);
    printf("PERCENTAGE = %.1f\n",percentage);
    
    return 0;
}
void avgandpercent(float sub1,float sub2,float sub3,float *sum,float *average,float *percentage)
{
    *sum=sub1+sub2+sub3;
    *average=*sum/3.0;
    *percentage=(*sum/500)*100;
}