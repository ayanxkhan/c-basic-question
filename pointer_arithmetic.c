// #include<stdio.h>

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int *ptr;
//     ptr=&arr[0];//we can also write ptr=&arr
//     printf("The value at index 0 is %d\n",*ptr);
//     ptr++;
//     printf("The value at index 1 is %d\n",*ptr);

//     return 0;
// }

#include<stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",ptr);
        ptr++;

    }
    for(int j=0;j<5;j++)
    {
        printf("marks of student %d is %d\n",j+1,arr[j]);
    }
    return 0;
}