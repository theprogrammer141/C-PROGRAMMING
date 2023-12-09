#include<stdio.h>
float calculatepercentage(float science,float maths,float english);
int main()
{
    float science,maths,english;
    printf("PERCENTAGE = %f",calculatepercentage(science,maths,english));
    return 0;
}
float calculatepercentage(float science,float maths,float english)
{
    printf("ENTER MARKS IN SCIENCE:");
    scanf("%f",&science);
    printf("ENTER MARKS IN MATHS:");
    scanf("%f",&maths);
    printf("ENTER MARKS IN ENGLISH:");
    scanf("%f",&english);
    float percentage,sum;
    sum=science+maths+english;
    percentage=(sum/500)*100;
    return percentage;
}