#include<stdio.h>

int main()
{

    int iNo1=10;
    const int iNo2=20;

    //below lines generate errors 11,12;
    iNo1++;  //INo1=iNo1+1;
    iNo2++;  //iNo2=iNo2+1;
    iNo2=30;


    return 0;
}