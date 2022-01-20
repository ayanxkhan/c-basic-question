#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a=10,b=30;
    printf("Before swapping\na=%d,b=%d\n",a,b);
    swap(&a,&b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping\na=%d,b=%d",*x,*y);
}