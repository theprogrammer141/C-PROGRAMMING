#include<stdio.h>
int main()
{
    int matrix[10][10];
    int r,c;
    int sum=0;

    printf("ENTER NUMBER OF ROWS OF MATRIX:");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS OF MATRIX:");
    scanf("%d",&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+matrix[i][j];
            }
        }
    }

    printf("SUM OF DIAGONAL ELEMENTS:%d",sum);

    return 0;
    
}