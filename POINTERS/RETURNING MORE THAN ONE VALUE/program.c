#include<stdio.h>
void areaandperimeter(int,float *,float *);
int main()
{
    int radius;
    float area,perimeter;
    printf("ENTER RADIUS OF CIRCLE:");
    scanf("%d",&radius);
    
    areaandperimeter(radius,&area,&perimeter);
    printf("AREA = %f\n",area);
    printf("PERIMETER = %f\n",perimeter);

    return 0;
}
void areaandperimeter(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}