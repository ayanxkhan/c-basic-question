#include<stdio.h>
void fun1(int a[])
{
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            printf("Positive integers from array are:%d\n",a[i]);
        }
        else if(a[i]<0)
        {
            printf("Negative integers from array are:%d\n",a[i]);
        }
    }
}

int main()
{
    int arr[10]={-1,-2,-3,-4,-5,6,7,8,9,2};
    fun1(arr);
    return 0;
}