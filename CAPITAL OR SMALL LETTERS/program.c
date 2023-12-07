#include<stdio.h>
int main()
{
    char alphabet;
    
    printf("ENTER ANY CHARACTER:");
    scanf("%c",&alphabet);
    printf("YOU ENTERED: %c \n",alphabet);

    if(alphabet>=65 && alphabet<=90)
    {
        printf("IT IS A CAPITAL LETTER!");
    }
    else if(alphabet>=97 && alphabet<=122)
    {
        printf("IT IS A SMALL LETTER!");
    }
    else if(alphabet>=48 && alphabet<=57)
    {
        printf("IT IS A DIGIT!");
    }
    else if(alphabet>=0 && alphabet<=47 || alphabet>=58 && alphabet<=64 || alphabet>=91 && alphabet<=96 || alphabet>=123 && alphabet<=127)
    {
        printf("IT IS A SPECIAL SYMBOL!");
    }

    return 0;
}