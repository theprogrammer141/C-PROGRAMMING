#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("ENTER SUBJECT 1 MARKS:");
    scanf("%f",&sub1);
    printf("ENTER SUBJECT 2 MARKS:");
    scanf("%f",&sub2);
    printf("ENTER SUBJECT 3 MARKS:");
    scanf("%f",&sub3);
    printf("ENTER SUBJECT 4 MARKS:");
    scanf("%f",&sub4);
    printf("ENTER SUBJECT 5 MARKS:");
    scanf("%f",&sub5);
    float total_marks=500.0;
    float obtained_marks=sub1+sub2+sub3+sub4+sub5;
    printf("TOTAL MARKS = %f \n",obtained_marks);
    float percentage_marks;
    percentage_marks=(obtained_marks/total_marks)*100;
    printf("PERCENTAGE MARKS = %f",percentage_marks);

    return 0;
}