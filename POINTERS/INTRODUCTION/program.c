#include<stdio.h>
int main()
{
    int i=3;       //normal variable
    int *j;        //pointer variable 
                    //*j means value at address contained in j is an integer
    j=&i;
    printf("ADDRESS OF I=%u\n",&i);
    printf("VALUE OF I=%u\n",i);
    printf("ADDRESS OF J=%u\n",&j);
    printf("VALUE OF J=%u\n",j);
    printf("VALUE OF I=%u\n",*(&i));
    printf("VALUE OF J=%u\n",*(&j));
    return 0;
}