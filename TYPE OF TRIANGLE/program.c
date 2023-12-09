#include<stdio.h>
#include<math.h>
int main()
{
    int side1,side2,side3,sum_of_two_sides;
    
    printf("ENTER SIDE 1:");
    scanf("%d",&side1);
    printf("ENTER SIDE 2:");
    scanf("%d",&side2);
    printf("ENTER SIDE 3:");
    scanf("%d",&side3);


    if(side1==side2 && side2!=side3)
    {
        printf("ISOCELES TRIANGLE");
    }
    else if(side1==side2 && side2==side3)
    {
        printf("EQUILATERAL TRIANGLE");
    }
    else if((side1*side1)+(side2*side2)==(side3*side3)||(side1*side1)+(side3*side3)==(side2*side2)||(side2*side2)+(side3*side3)==(side1*side1))
    {
        printf("RIGHT-ANGLED TRIANGLE");
    }
      else if(!(side1==side2==side3))
    {
        printf("SCALENE TRIANGLE");
    }
    return 0;

}