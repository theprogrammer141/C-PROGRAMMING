#include<stdio.h>
int main()
{
    float distance;
    printf("ENTER DISTANCE(KM):");
    scanf("%f",&distance);
    float distance_in_meters=distance*1000;
    float distance_in_inches=distance*39370.079;
    float distance_in_feet=distance*3280.84;
    float distance_in_centimeters=distance*100000;
    printf("METERS = %f \n",distance_in_meters);
    printf("INCHES = %f \n",distance_in_inches);
    printf("FEET = %f \n",distance_in_feet);
    printf("CENTIMETERS = %f \n",distance_in_centimeters);

}