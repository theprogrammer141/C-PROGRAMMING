#include<stdio.h>
int main()
{
    char names[][10]={
                        "HUZAIFA",
                        "ABDULLAH",
                        "BILAL",
                        "MUSTAFA",
                        "ALI"
                    };

   
   printf("ORIGINAL NAMES:%s\n%s\n",&names[2][0],&names[3][0]);

   char ch;
   for(int i=0;i<10;i++)
   {
        ch=names[2][i];
        names[2][i]=names[3][i];
        names[3][i]=ch;
   }

   printf("CHANGES NAMES:%s\n%s\n",&names[2][0],&names[3][0]);
   
   return 0;

}