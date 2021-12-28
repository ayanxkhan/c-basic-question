#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("Your age is 1\n");
        break;

    case 7:
        printf("Your age is 7\n");
        break;

    case 21:
        printf("Your age is 21\n");
        break;

    default:
        printf("Age not matched\n");
    }
    return 0;
}