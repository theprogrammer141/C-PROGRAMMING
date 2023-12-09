#include<stdio.h>
int main()
{
    int age;
    printf("ENTER AGE:");
    scanf("%d",&age);

    if(age>18)
    {
        printf("ADULT");
    }
    else if(age>13 && age<=18)
    {
        printf("TEENAGER");
    }
    else
    {
        printf("CHILD");
    }

    return 0;
}