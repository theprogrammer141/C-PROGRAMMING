#include<stdio.h>
int main()
{
    float triangle_area,base,vertical_height;
    int triangle_perimeter,side_a,side_b,side_c;
    printf("ENTER BASE:");
    scanf("%f",&base);
    printf("ENTER HEIGHT:");
    scanf("%f",&vertical_height);
    printf("ENTER SIDE A:");
    scanf("%d",&side_a);
    printf("ENTER SIDE B:");
    scanf("%d",&side_b);
    printf("ENTER SIDE C:");
    scanf("%d",&side_c);
    triangle_area=0.5*(base*vertical_height);
    triangle_perimeter=side_a+side_b+side_c;
    printf("AREA = %f \n",triangle_area);
    printf("PERIMETER = %d \n",triangle_perimeter);

    return 0;
    
}