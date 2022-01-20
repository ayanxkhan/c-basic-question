#include<stdio.h>

int main()
{
    int mul[10];
    for(int i=1;i<11;i++)
    {
        mul[i]=5*i;
    }
    for(int i=1;i<11;i++)
    {
        printf("5x%d=%d\n",i,mul[i]);
    }
    return 0;
}