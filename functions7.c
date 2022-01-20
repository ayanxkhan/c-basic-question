#include <stdio.h>
void array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum = sum + a[j];
    }
    printf("%d", sum);
}
int main()
{
    int n;
    int arr[100];
    array(arr, 5);
    int arr1[100];
    array(arr1, 6);
}