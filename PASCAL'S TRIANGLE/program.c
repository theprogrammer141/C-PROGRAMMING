#include<stdio.h>
int main()
{
    int number,i,s,j,c;
    printf("ENTER A NUMBER:");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        for(s=1;s<number-i;s++)
        {
            printf(" ");
        }
            for(j=0;j<=i;j++)
            {
                if(i==0 || j==0)
                    c=1;
                else
                    c=c*(i-j+1)/j;
                printf("%d ",c);
            }
            printf("\n");
        
    }
    return 0;
}