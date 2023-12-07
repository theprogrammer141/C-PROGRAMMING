#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER CHARACTER:");
    scanf("%c",&ch);
    if(ch>=0 && ch<=9)
    {
    printf("CHARACTER IS DIGIT");
    }
    else
    {
       printf("NOT A DIGIT"); 
    }
    return 0;
}