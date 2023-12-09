#include<stdio.h>
int main()
{
    double hardness,carbon_content,tensile_strength;
    printf("HARDNESS:");
    scanf("%lf",&hardness);
    printf("CARBON CONTENT:");
    scanf("%lf",&carbon_content);
    printf("TENSILE STRENGTH:");
    scanf("%lf",&tensile_strength);

    if(hardness>50 && carbon_content>0.7 && tensile_strength>5600)
    {
        printf("GRADE 10");
    }
    else if(hardness>50 && carbon_content>0.7 && tensile_strength>!5600)
    {
        printf("GRADE 9");
    }
    else if(hardness>!50 && carbon_content>0.7 && tensile_strength>5600)
    {
        printf("GRADE 8");
    }
    else if(hardness>50 && carbon_content>!0.7 && tensile_strength>5600)
    {
        printf("GRADE 7");
    }
    else if(hardness>50 || carbon_content>0.7 || tensile_strength>5600)
    {
        printf("GRADE 6");
    }
    else
    {
        printf("GRADE 5");
    }
    
    return 0;
}