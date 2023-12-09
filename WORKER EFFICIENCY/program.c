#include<stdio.h>
int main()
{
    double time_taken;
    printf("ENTER TIME TAKEN BY THE WORKER:");
    scanf("%lf",&time_taken);

    if(time_taken>2 && time_taken<3)
    {
        printf("HIGHLY EFFICIENT");
    }
    else if(time_taken>3 && time_taken<4)
    {
        printf("IMPROVE YOUR SPEED!");
    }
    else if(time_taken>4 && time_taken<5)
    {
        printf("YOU NEED TO BE TRAINED!");
    }
    else if(time_taken>5)
    {
        printf("YOU ARE FIRED!");
    }

    return 0;
}