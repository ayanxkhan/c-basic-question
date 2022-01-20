#include <stdio.h>
int fun(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < s; j++)
    {
        printf("%d ", a[j]);
    }
}
int main()
{
    int n;
    int array[100];
    fun(array, 3);

    return 0;
}
