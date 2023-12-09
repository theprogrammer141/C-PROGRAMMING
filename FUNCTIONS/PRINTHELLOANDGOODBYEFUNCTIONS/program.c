#include<stdio.h>
//FUNCTION PROTOTYPES OR FUNCTION DECLARATION
void printhello();
void printgoodbye();
//MAIN FUNCTION
int main()
{
    //FUNCTION CALLS
    printhello();
    printgoodbye();

    return 0;
}

//FUCNTION DEFINITIONS
void printhello()
{
    printf("HELLO\n");
}

void printgoodbye()
{
    printf("GOODBYE\n");
}