#include<stdio.h>
int main()
{
    int age;
    char gender,marital_status;
    printf("ENTER AGE:");
    scanf("%d",&age);
    printf("ENTER GENDER:");
    scanf("%c\n",&gender);
    printf("ENTER MARITAL STATUS:");
    scanf("%c\n",&marital_status);

    if((marital_status=='M')||(marital_status=='U'&&gender=='M'&&age>30)||(marital_status=='U'&&gender=='F'&&age>25))
    {
        printf("DRIVER IS INSURED");
    }
    else
    {
        printf("DRIVER IS NOT INSURED");
    }

    return 0;
}