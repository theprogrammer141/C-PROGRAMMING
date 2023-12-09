//MAKING A SIMPLE CALCULATOR USING FUNCTIONS,LOOPS AND SWITCH CASE
#include<stdio.h>

//FUNCTION PROTOTYPES
double addition(double,double);
double subtraction(double,double);
double multiplication(double,double);
double division(double,double);
int modulus(int,int);

//THE MAIN()
int main()
{
    double num1,num2;
    printf("ENTER FIRST NUMBER:");
    scanf("%lf",&num1);
    printf("ENTER SECOND NUMBER:");
    scanf("%lf",&num2);
    char choice;
    char ch;

    //DO WHILE LOOP
    do
    {
    printf("ENTER THE OPERATION YOU WANT TO PERFORM:");
    scanf(" %c",&choice);

    //SWITCH CASE
    switch(choice)
    {
        case '+':
        addition(num1,num2);
        break;
        case'-':
        subtraction(num1,num2);
        break;
        case'*':
        multiplication(num2,num2);
        break;
        case'/':
        division(num1,num2);
        break;
        case'%':
        modulus(num1,num2);
        break;
        default:
        printf("INVALID INPUT!ENTER AGAIN:");
    }
    printf("DO YOU WANT TO PERFORM AGAIN?");
    scanf(" %c",&ch);
    }while(ch=='Y' || ch=='y');
    return 0;
}

//FUNCTION DEFINITIONS
//ADDITION
double addition(double a,double b)
{
    double sum;
    sum=a+b;
    printf("SUM = %.1lf\n",sum);
    return sum;
}

//SUBTRACTION
double subtraction(double a ,double b)
{
    double sub;
    sub=a-b;
    printf("SUB = %.1lf\n",sub);
    return sub;
}

//MULTIPLICATION
double multiplication(double a,double b)
{
    double mul;
    mul=a*b;
    printf("MUL = %.1lf\n",mul);
    return mul;
}

//DIVISION
double division(double a,double b)
{
    double div;
    div=a/b;
    printf("DIV = %.1lf\n",div);
    return div;
}

//MODULUS
int modulus(int a , int b)
{
    int mod;
    mod=a%b;
    printf("MOD = %d\n",mod);
    return mod;
}