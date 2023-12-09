#include<stdio.h>
int main()
{
    int age_of_ali,age_of_ahmed,age_of_haider;
    printf("ENTER AGE OF ALI:");
    scanf("%d",&age_of_ali);
    printf("ENTER AGE OF AHMED:");
    scanf("%d",&age_of_ahmed);
    printf("ENTER AGE OF HAIDER:");
    scanf("%d",&age_of_haider);
    
    if(age_of_ali<age_of_ahmed && age_of_ali<age_of_haider)
    {
        printf("ALI IS YOUNGEST");
    }
    else if(age_of_ahmed<age_of_ali && age_of_ahmed<age_of_haider)
    {
        printf("AHMED IS YOUNGEST");
    }
    else
    {
        printf("HAIDER IS YOUNGEST");
    }

    return 0;

}