#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,percentage;
    printf("ENTER MARKS OF 5 SUBJECTS:");
    scanf("%d\n%d\n%d\n%d\n%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    percentage=(sub1+sub2+sub3+sub4+sub5)/5;

    if(percentage>=60)
    {
        printf("FIRST DIVISION");
    }   

    if(percentage>50 && percentage<60)
    {
        printf("SECOND DIVISION");
    }

    if(percentage>40 && percentage<50)
    {
        printf("THIRD DIVISION");
    }

    if(percentage<40)
    {
        printf("FAIL");
    }

    return 0;
}