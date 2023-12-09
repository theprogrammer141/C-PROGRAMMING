#include<stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float CGPA;
};

int main()
{
    struct student ece[3];
    struct student se[3];
    struct student it[3];
    
    for(int i=0;i<3;i++)
    {
        printf("ENTER ECE STUDENT[%d] NAME:",i);
        scanf("%s",&ece[i].name);
        printf("ENTER ECE STUDENT[%d] ROLL NUMBER:",i);
        scanf("%d",&ece[i].roll_no);
        printf("ENTER ECE STUDENT[%d] CGPA:",i);
        scanf("%f",&ece[i].CGPA);
    }

    for(int i=0;i<3;i++)
    {
        printf("ENTER SE STUDENT[%d] NAME:",i);
        scanf("%s",&se[i].name);
        printf("ENTER SE STUDENT[%d] ROLL NUMBER:",i);
        scanf("%d",&se[i].roll_no);
        printf("ENTER SE STUDENT[%d] CGPA:",i);
        scanf("%f",&se[i].CGPA);
    }

    for(int i=0;i<3;i++)
    {
        printf("ENTER IT STUDENT[%d] NAME:",i);
        scanf("%s",&it[i].name);
        printf("ENTER IT STUDENT[%d] ROLL NUMBER:",i);
        scanf("%d",&it[i].roll_no);
        printf("ENTER IT STUDENT[%d] CGPA:",i);
        scanf("%f",&it[i].CGPA);
    }

    printf("\nECE STUDENTS DATA:\n");
    for(int i=0;i<3;i++)
    {
        printf("STUDENT[%d] NAME:%s\n",i,ece[i].name);
        printf("STUDENT[%d] ROLL NUMBER:%d\n",i,ece[i].roll_no);
        printf("STUDENT[%d] CGPA:%f\n",i,ece[i].CGPA);
    }
    printf("\n");

    printf("\nSE STUDENTS DATA:\n");
    for(int i=0;i<3;i++)
    {
        printf("STUDENT[%d] NAME:%s\n",i,se[i].name);
        printf("STUDENT[%d] ROLL NUMBER:%d\n",i,se[i].roll_no);
        printf("STUDENT[%d] CGPA:%f\n",i,se[i].CGPA);
    }
    printf("\n");

    printf("\nIT STUDENTS DATA:\n");
    for(int i=0;i<3;i++)
    {
        printf("STUDENT[%d] NAME:%s\n",i,it[i].name);
        printf("STUDENT[%d] ROLL NUMBER:%d\n",i,it[i].roll_no);
        printf("STUDENT[%d] CGPA:%f\n",i,it[i].CGPA);
    }
    printf("\n");

    
    return 0;

}