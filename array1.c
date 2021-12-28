#include <stdio.h>
int main()
{
    int i;
    int arr[] = {10, 20, 30, 40, 50, 60};

    for (i = 0; i < 6; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}