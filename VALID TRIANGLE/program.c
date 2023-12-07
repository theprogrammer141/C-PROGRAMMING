#include<stdio.h>
int main()
{
    double angle_1,angle_2,angle_3;
    printf("ENTER THREE ANGLES:");
    scanf("%lf\n%lf\n%lf",&angle_1,&angle_2,&angle_3);

    if(angle_1+angle_2+angle_3==180)
    {
        printf("TRIANGLE IS VALID");
    }
    else
    {
        printf("NOT A VALID TRIANGLE");
    }

    return 0;
}