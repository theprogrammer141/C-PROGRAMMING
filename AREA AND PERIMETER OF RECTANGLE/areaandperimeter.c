#include<stdio.h>
int main()
{
    float rectangle_area,width,height;
    float rectangle_perimeter,side_a,side_b;
    printf("ENTER WIDTH :");
    scanf("%f",&width);
    printf("ENTER HEIGHT :");
    scanf("%f",&height);
    printf("ENTER SIDE A :");
    scanf("%f",&side_a);
    printf("ENTER SIDE B :");
    scanf("%f",&side_b);
    rectangle_area=(width*height);
    rectangle_perimeter=2*(side_a+side_b);
    printf("AREA = %f \n",rectangle_area);
    printf("PERIMETER = %f \n",rectangle_perimeter);

    return 0;
}