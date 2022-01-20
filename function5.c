#include<stdio.h>
int swap(int i,int j);
int main()
{
    int a=10,b=30;
    printf("Before swapping a=%d,b=%d\n",a,b);
    swap(a,b);

    return 0;
}
int swap(int i,int j)
{
    int t;
    t=i;
    i=j;
    j=t;
    printf("After swapping a=%d,b=%d\n",i,j);
}