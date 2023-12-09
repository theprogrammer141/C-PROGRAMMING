#include<stdio.h>
int main()
{
    int marks_of_A,marks_of_B;
    printf("ENTER MARKS OF A:");
    scanf("%d",&marks_of_A);
    printf("ENTER MARKS OF B:");
    scanf("%d",&marks_of_B);
    
    if(marks_of_A>=55 && marks_of_B>=45)
    {
        printf("QUALIFIED");
    }
    else if(marks_of_A>55 && marks_of_B>=55 && marks_of_A<!45)
    {
        printf("QUALIFIED");
    }
    else if(marks_of_B<45 && marks_of_A>=65)
    {
        printf("YOU CAN REAPPEAR IN B");
    }
    else
    {
        printf("FAIL!");
    }

    return 0;
}