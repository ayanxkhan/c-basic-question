//C program to swap the values of two variables with or without using third variable
// #include <stdio.h>
// int main()
// {
//     int a = 20, b = 30, temp;
//     printf("Before swapping\n a=%d,b=%d", a, b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("\nafter swapping\n a=%d,b=%d", a, b);

//     return 0;
// }
#include <stdio.h>
int main()
{
    int a = 20, b = 30, temp;
    printf("Before swapping\n a=%d,b=%d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nafter swapping\n a=%d,b=%d", a, b);

    return 0;
}