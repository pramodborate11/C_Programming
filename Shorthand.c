#include<stdio.h>

int main()
{
    int i=10;
    int j=10;

    int iAns = 0;
    int jAns= 0;

    iAns=i++;
    jAns=++j;

    printf("Value of i : %d\n",i);       //11
    printf("value of iAns :%d\n",iAns);  //10

    printf("Value of j : %d\n",j);       //11
    printf("value of jAns :%d\n",jAns);  //11

    return 0;
}