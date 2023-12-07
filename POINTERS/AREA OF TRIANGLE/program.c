#include<stdio.h>
#include<math.h>
void areaoftriangle(float,float,float,float *,float *);
int main()
{
    float a,b,c;
    float area,sum;

    printf("ENTER SIDE 1:");
    scanf("%f",&a);
    printf("ENTER SIDE 2:");
    scanf("%f",&b);
    printf("ENTER SIDE 3:");
    scanf("%f",&c);

    areaoftriangle(a,b,c,&area,&sum);
    printf("SUM = %.1f\n",sum);
    printf("AREA = %.1f\n",area);

    return 0;
}
void areaoftriangle(float x,float y,float z,float *area,float *sum)
{
    *sum=(x+y+z)/2;
    *area=(sqrt)(*sum*(*sum-x)*(*sum-y)*(*sum-z)); 
}