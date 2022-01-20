#include<stdio.h>
int array(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
       printf("Enter the elements of array:\n");
       scanf("%d",&a[i]);

    }
    for(int j=0;j<size;j++)
    {
        printf("arr[%d]=%d\n",j,a[j]);
    }
}


int main()
{
    int n;
    int arr[100];
    array(arr,7);

    return 0;
}