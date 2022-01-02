// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter two numbers:");
//     scanf("%d%d", &a, &b);

//     if (a > b)
//     {
//         printf("greatest number is %d\n", a);
//     }
//     else
//     {
//         printf("greatest number is %d\n", b);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if (a > c)
    {
        if (a > b)
        {
            printf("Greatest number is %d\n", a);
        }
        else
        {
            printf("Greatest number is %d\n", b);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Greatest number is %d\n", b);
        }
        else
        {
            printf("Greatest number is %d\n", c);
        }
    }

    return 0;
}