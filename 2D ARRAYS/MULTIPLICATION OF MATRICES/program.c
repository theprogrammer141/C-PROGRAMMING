#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2,r3,c3;

    printf("ENTER NUMBER OF ROWS OF MATRIX A:");
    scanf("%d",&r1);
    printf("ENTER NUMBER OF COLUMNS OF MATRIX A:");
    scanf("%d",&c1);

    printf("ELEMENTS OF MATRIX A--------------------\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("ENTER ELEMENT[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("MATRIX A--------------------\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------\n");

    printf("ENTER NUMBER OF ROWS OF MATRIX B:");
    scanf("%d",&r2);
    printf("ENTER NUMBER OF COLUMNS OF MATRIX B:");
    scanf("%d",&c2);

    printf("ELEMENTS OF MATRIX B--------------------\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("ENTER ELEMENT[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("MATRIX B--------------------\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
    
    if(c1!=r2)
    {
        printf("CANNOT MULTIPLY!");
    }
    else
    {
    printf("RESULTANT MATRIX----------------------\n");
    
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            int sum=0;
            for(int k=0;k<c1;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }

    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------------\n");
    }
    return 0;
}