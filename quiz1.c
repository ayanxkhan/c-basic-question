#include <stdio.h>
int main()
{
    int num = 3;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0 && i++ % num == 0)
        {
            printf("%d", i--);
        }
    }
    return 0;
}