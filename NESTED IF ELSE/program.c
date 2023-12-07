#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,percentage;
    printf("ENTER MARKS OF 5 SUBJECTS : ");
    scanf("%d\n%d\n%d\n%d\n%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    percentage=(sub1+sub2+sub3+sub4+sub5)/5;

    if(percentage>=60)
    {
        printf("FIRST DIVISION");
    }
    else
    {
        if(percentage>=50)
        {
            printf("SECOND DIVISON");
        }
        else
        {
            if(percentage>=40)
            {
                printf("THIRD DIVISION");
            }
            else
            {
                if(percentage<40)
                {
                    printf("FAIL");
                }
            }
        }
    }
}