#include<stdio.h>

int checkvowels(char []);

int main()
{
    char str[50];
    
    printf("ENTER A STRING:");
    fgets(str,50,stdin);

    printf("VOWELS ARE:%d",checkvowels(str));

    return 0;
}

int checkvowels(char str[])
{
    int count=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }

    return count;
}