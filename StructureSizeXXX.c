#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    char ch1;
    
    float f;
    int j;
    char ch2;
};

int main()
{
    printf("Size of structure : %lu\n ",sizeof(struct Demo));
   
    return 0;
}