#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    printf("The address of a is %u\n", &a);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *(&a));
    printf("The value of ptr is %d\n", ptr);
    printf("The address of ptr is %u\n", &ptr);

    return 0;
}