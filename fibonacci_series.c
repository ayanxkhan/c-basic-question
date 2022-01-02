#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;
    printf("\n Fibonacci series of 10 elements:");
    printf("\n%d", a);
    printf("\n%d", b);

    for (int i = 1; i < 9; i++)
    {
        c = a + b;
        printf("\n%d", c);
        a = b;
        b = c;
    }
    return 0;
}