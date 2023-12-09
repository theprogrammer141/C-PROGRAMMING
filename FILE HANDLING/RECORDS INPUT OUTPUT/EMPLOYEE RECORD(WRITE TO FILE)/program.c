#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct employee
{
    char name[50];
    int age;
    float basic_salary;
};

int main()
{
    struct employee e;
    char another='Y';

    FILE *fp;
    fp=fopen("employee.txt","w");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    while(another=='Y')
    {   
        printf("ENTER NAME:");
        scanf("%s",e.name);
        printf("ENTER AGE:");
        scanf("%d",&e.age);
        printf("ENTER BASIC SALARY:");
        scanf("%f",&e.basic_salary);
        fprintf(fp,"NAME : %s\n",e.name);
        fprintf(fp,"AGE : %d\n",e.age);
        fprintf(fp,"BASIC SALARY : %.2f\n",e.basic_salary);

        printf("DO YOU WANT TO ADD ANOTHER RECORD?(Y/N):");
        fflush(stdin);
        another=getche();
    }

    fclose(fp);
    return 0;
}