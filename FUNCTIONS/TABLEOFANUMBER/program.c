#include<stdio.h>
void printtable(int n);
int main()
{
    int n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    printtable(n);
}

void printtable(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}