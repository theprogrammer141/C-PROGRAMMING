#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct employee
{
    char name[10];
    int age;
    float basic_salary;
};

int main()
{
    struct employee e[3];
    FILE *fp;
    char ch='Y';

    fp=fopen("employee.txt","w");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

      while(ch=='Y')
    {  
    for(int i=0;i<3;i++)
    {
        printf("ENTER NAME OF EMPLOYEE[%d]:",i);
        scanf("%s",e[i].name);
        printf("ENTER AGE OF EMPLOYEE[%d]:",i);
        scanf("%d",&e[i].age);
        printf("ENTER BASIC SALARY OF EMPLOYEE[%d]:",i);
        scanf("%f",&e[i].basic_salary);
        fprintf(fp,"NAME OF EMPLOYEE : %s\n",e[i].name);
        fprintf(fp,"AGE OF EMPLOYEE : %d\n",e[i].age);
        fprintf(fp,"BASIC SALARY OF EMPLOYEE : %.2f\n",e[i].basic_salary);
    }
        printf("DO YOU WANT TO ADD 3 MORE RECORDS?(Y/N):");
        fflush(stdin);
        ch=getch();
        printf("\n");
    }

    fclose(fp);
    return 0;

}