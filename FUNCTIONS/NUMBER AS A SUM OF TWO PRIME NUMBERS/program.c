#include<stdio.h>
int isprime(int);
int main()
{
    int number;
    printf("ENTER A NUMBER:");
    scanf("%d",&number);

    int flag=0;

    for(int i=2;i<=number/2;i++)
    {
        if(isprime(i) && isprime(number-i))
        {
            printf("%d + %d = %d\n",i,number-i,number);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("THIS NUMBER CANNOT BE EXPRESSED AS A SUM OF TWO PRIME NUMBERS!");
    }

    return 0;
}
int isprime(int n)
{
    if(n<=1)
    {
        printf("INVALID INPUT!");
        return 0;
    }      

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}