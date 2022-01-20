#include <stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5};
    int i, sum = 0;
    float avg = 0;
    printf("\nThe elements of array are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i < 5; i++)
        sum += a[i];
    avg = sum / i;
    printf("The average of the array is = %.2f\n", avg);
    return 0;
}