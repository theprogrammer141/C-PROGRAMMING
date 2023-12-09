#include<stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float CGPA;
};

int main()
{
    struct student s[3];

    for(int i=0;i<3;i++)
    {
        printf("ENTER NAME OF STUDENT[%d]:",i);
        scanf("%s",s[i].name);
        printf("ENTER ROLL NUMBER OF STUDENT[%d]:",i);
        scanf("%d",&s[i].roll_no);
        printf("ENTER CGPA OF STUDENT[%d]:",i);
        scanf("%d",&s[i].CGPA);
    }

    // for(int i=0;i<3;i++)
    // {
    //     printf("ENTER STUDENT[%d] ROLL NUMBER:",i);
    //     scanf("%d",&s[i].roll_no);
    // }

    // for(int i=0;i<3;i++)
    // {
    //     printf("ENTER CGPA OF STUDENT[%d]:",i);
    //     scanf("%f",&s[i].CGPA);
    // }

    printf("\nSTUDENTS INFORMATION:\n");
    for(int i=0;i<3;i++)
    {
        printf("NAME OF STUDENT[%d]:%s\n",i,s[i].name);
        printf("ROLL NUMBER OF STUDENT[%d]:%d\n",i,s[i].roll_no);
        printf("CGPA OF STUDENT[%d]:%f\n",i,s[i].CGPA);
        printf("\n");
    }

    return 0;
}