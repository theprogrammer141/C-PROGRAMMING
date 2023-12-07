#include<stdio.h>
int main()
{
    char day;
    printf("ENTER DAY:");
    scanf("%c",&day);

    switch(day)
    {
        case 'm':
        printf("MONDAY");
        break;
        case 't':
        printf("TUESDAY");
        break;
        case 'w':
        printf("WEDNESDAY");
        break;
        case 'h':
        printf("THURSDAY");
        break;
        case 'f':
        printf("FRIDAY");
        break;
        case 'a':
        printf("SATURDAY");
        break;
        case 's':
        printf("SUNDAY");
        break;
        default:
        printf("NOT A VALID CHARACTER");
        
    }
    return 0;
}