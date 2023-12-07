#include<stdio.h>
int main()
{
    int side1,side2,side3,sum_of_two_sides;
    printf("ENTER SIDE 1:");
    scanf("%d",&side1);
    printf("ENTER SIDE 2:");
    scanf("%d",&side2);
    printf("ENTER SIDE 3:");
    scanf("%d",&side3);

    sum_of_two_sides=side1+side2;
    
    if(sum_of_two_sides>side3)
    {
        printf("VALID TRIANGLE");
    }
    else
    {
        printf("NOT A VALID TRIANGLE");
    }

    return 0;
}