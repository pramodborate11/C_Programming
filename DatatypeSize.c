#include<stdio.h>
//storage registor- auto,extern
int main()
{
    char cValue='s';
    int iValue=11;
    float fValue=90.78f; 
    double dValue=98.564323;

   printf("Size of character is : %lu\n",sizeof(cValue));
   printf("Size of Interger is : %lu\n",sizeof(iValue));
   printf("Size of Float is : %lu\n",sizeof(fValue));
   printf("Size of Double is : %lu\n",sizeof(dValue));
   
   return 0;
}