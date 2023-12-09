#include<stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks1;
    float marks2;
    float marks3;
};

int main()
{
    struct student st[3];
    float total_marks,average;

    for(int i=0;i<3;i++)
    {
        printf("ENTER NAME OF STUDENT[%d]:",i);
        scanf("%s",&st[i].name);
        printf("ENTER ROLL NUMBER OF STUDENT[%d]:",i);
        scanf("%d",&st[i].roll_no);
        printf("ENTER MARKS 1 OF STUDENT[%d]:",i);
        scanf("%f",&st[i].marks1);
        printf("ENTER MARKS 2 OF STUDENT[%d]:",i);
        scanf("%f",&st[i].marks2);
        printf("ENTER MARKS 3 OF STUDENT[%d]:",i);
        scanf("%f",&st[i].marks3);
    }

    for(int i=0;i<3;i++)
    {
        total_marks=st[i].marks1+st[i].marks2+st[i].marks3;
        printf("TOTAL MARKS FOR STUDENT[%d] are : %.2f\n",i,total_marks);
    }

    printf("\n");
    for(int i=0;i<3;i++)
    {
        average=st[i].marks1+st[i].marks2+st[i].marks3/3;
        printf("AVERAGE MARKS FOR STUDENT[%d] are : %.2f\n",i,average);
    }

    return 0;
}