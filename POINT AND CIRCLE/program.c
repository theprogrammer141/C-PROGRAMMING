#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1;
    int x2,y2;
    int radius;
    int distance;

    printf("ENTER CENTER OF CIRCLE:");
    scanf("%d,%d",&x1,&y1);
    printf("CENTER(%d,%d) \n",x1,y1);
    printf("ENTER POINT COORDINATES:");
    scanf("%d,%d",&x2,&y2);
    printf("POINT(%d,%d) \n",x2,y2);
    printf("ENTER RADIUS:");
    scanf("%d",&radius);

    distance=sqrt(pow(x2-x1,2)-pow(y2-y1,2));
    printf("DISTANCE = %d \n",distance);

    if(distance>radius)
    {
        printf("THE POINT LIES OUTSIDE  THE CIRCLE");
    }
    else if(distance==radius)
    {
        printf("THE POINT LIES ON THE CIRCLE");
    }
    else if(distance<radius)
    {
        printf("THE POINT LIES INSIDE THE CIRCLE");
    }

    return 0;

}