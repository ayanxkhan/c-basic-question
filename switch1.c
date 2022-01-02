// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age:");
//     scanf("%d", &age);

//     switch (age)
//     {
//     case 1:
//         printf("Your age is 1\n");
//         break;

//     case 7:
//         printf("Your age is 7\n");
//         break;

//     case 21:
//         printf("Your age is 21\n");
//         break;

//     default:
//         printf("Age not matched\n");
//     }
//     return 0;
// }



#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number between 1 to 7:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Today is Monday\n");
        break;

    case 2:
        printf("Today is Tuesday\n");
        break;

    case 3:
        printf("Today is Wednesday\n");
        break;

    case 4:
    printf("Today is Thursday\n");
    break;

    case 5:
    printf("Today is Friday\n");
    break;

    case 6:
    printf("Today is Saturday\n");
    break;

    case 7:
    printf("Today is Sunday\n");
    break;    

    default:
        printf("Oops!! You have entered wrong number\n");
    }
    return 0;
}