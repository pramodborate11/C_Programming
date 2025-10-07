#include<stdio.h>

int main()
{
    char cValue='s';
    int iValue=11;
    float fValue=90.78f; //f is optinal ,but f not write then its consider as double
    double dValue=98.564323;

   printf("Size of character is : %d\n",sizeof(cValue));
   printf("Size of Interger is : %d\n",sizeof(iValue));
   printf("Size of Float is : %d\n",sizeof(fValue));
   printf("Size of Double is : %d\n",sizeof(dValue));
    return 0;
}