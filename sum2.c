#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);

    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;
}