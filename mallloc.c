#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    //below we have allocated 6 memory space for int dynamically
    ptr=(int *)malloc(6 * sizeof(int));//malloc always returns void pointer therefore we have typecast it by using (int *)
    for(int i=0;i<6;i++)
    {
        printf("Enter the  value of %d element:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("The value of %d element is: %d\n",i,ptr[i]);
    }
    return 0;
}