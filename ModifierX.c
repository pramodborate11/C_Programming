#include<stdio.h>

int main()
{
    int i=10;   // by default all variable are signed
    int j=-10;  // 1
    int k=+10;

    signed int a=10;  
    signed int b=-10;
    signed int c=+10;

    unsigned int x=10;    //unsigned are always positive
    unsigned int y=+10;
    unsigned int z=-10;

    printf("%d \n",x);
    printf("%d \n",y);
    printf("%d \n",z);
    

    return 0;
}