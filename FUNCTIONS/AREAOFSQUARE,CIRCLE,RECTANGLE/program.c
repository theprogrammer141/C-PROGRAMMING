#include<stdio.h>
int  areaofsquare(int  side);
float areaofcircle(float radius);
int  areaofrectangle(int length,int width);
int main()
{
    int side;
    printf("ENTER SIDE OF SQUARE:");
    scanf("%d",&side);
    areaofsquare(side);
    float radius;
    printf("ENTER RADIUS OF CIRCLE:");
    scanf("%f",&radius);
    areaofcircle(radius);
    int length,width;
    printf("ENTER LENGTH AND WIDTH OF RECTANGLE:");
    scanf("%d %d",&length,&width);
    areaofrectangle(length,width);
    
    return 0;

}
int areaofsquare(int side)
{
    int squarearea=side*side;
    printf("AREA OF SQUARE = %d\n",squarearea);
    return squarearea;
}
float areaofcircle(float radius)
{
    float circlearea=3.14*radius*radius; 
    printf("AREA OF CIRCLE = %f\n",circlearea);
    return circlearea;
}
int areaofrectangle(int length,int width)
{
    int rectanglearea=length*width;   
    printf("AREA OF RECTANGLE = %d\n",rectanglearea);
    return rectanglearea;
}