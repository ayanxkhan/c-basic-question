#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int ay[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&ay[i]);
    }
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum=sum+ay[j];
    }
    printf("\nSum of array:%d\n",sum);

    return 0;




}