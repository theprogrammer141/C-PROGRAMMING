#include<stdio.h>
int main()
{
    double maths,physics,chemistry,computer,english,total,percentage;
    printf("ENTER MARKS FOR MATHS:");
    scanf("%lf",&maths);
    printf("ENTER MARKS FOR PHYSICS:");
    scanf("%lf",&physics);
    printf("ENTER MARKS FOR CHEMISTRY:");
    scanf("%lf",&chemistry);
    printf("ENTER MARKS FOR COMPUTER:");
    scanf("%lf",&computer);
    printf("ENTER MARKS FOR ENGLISH:");
    scanf("%lf",&english);

    total=maths+physics+chemistry+computer+english;
    percentage=(total/500)*100;
    printf("TOTAL = %.1lf \n",total);
    printf("PERCENTAGE = %.1lf \n",percentage);

    if(percentage>=90)
    {
        printf("GRADE:A");
    }
    else if(percentage>=80)
    {
        printf("GRADE:B");
    }
    else if(percentage>=70)
    {
        printf("GRADE:C");
    }
    else if(percentage>=60)
    {
        printf("GRADE:D");
    }
    else
    {
        printf("GRADE:F");
    }

    return 0;
}