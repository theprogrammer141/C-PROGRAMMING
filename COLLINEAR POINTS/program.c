#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    int m1,m2;
    
    printf("ENTER X1:");
    scanf("%d",&x1);
    printf("ENTER Y1:");
    scanf("%d",&y1);
    printf("ENTER X2:");
    scanf("%d",&x2);
    printf("ENTER Y2:");
    scanf("%d",&y2);
    printf("ENTER X3:");
    scanf("%d",&x3);
    printf("ENTER Y3:");
    scanf("%d",&y3);
    
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    printf("SLOPE M1 = %d \n",m1);
    printf("SLOPE M2 = %d \n",m2);

    if(m1==m2)
    {
        printf("THE POINTS ARE COLLINEAR");
    }
    else
    {
        printf("THE POINTS ARE NOT COLLINEAR");
    }

    return 0;
}