#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("ENTER NUMBER:");
        scanf("%d",&n);
        if(n%2!=0)
        {
            break;
        }
    } while (1);
    
    return 0;
    
}