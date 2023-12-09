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
    FILE *fp;

    fp=fopen("employee.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    while(fscanf(fp,"%s\n%d\n%f\n",e.name,&e.age,&e.basic_salary)!=EOF)
    {
        printf("NAME : %s\n",e.name);
        printf("AGE : %d\n",e.age);
        printf("BASIC SALARY : %f\n",e.basic_salary);
    }

    fclose(fp);
    return 0;
}