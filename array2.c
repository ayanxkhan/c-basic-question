#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int ay[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter the elements of array:");
        scanf("%d",&ay[i]);


    }
    for(int j=0;j<n;j++)
    {
        printf("%d\n",ay[j]);
        
    }
    return 0;





}