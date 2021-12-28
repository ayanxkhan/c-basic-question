#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}