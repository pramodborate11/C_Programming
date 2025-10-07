#include<stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p=&(Arr[1]);
    q=&(Arr[4]);

    printf("Result of substraction is : %ld\n",q-p);  //allowed

    q = q - 2;

    printf("Data Pointed by q is :%d\n",*q);  //51 Allowed

  
    return 0;
}