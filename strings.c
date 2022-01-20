// #include <stdio.h>
// void printstr(char str[])
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
// }
// int main()
// {
//     char str[] = "ayan";
//     printstr(str);
//     return 0;
// }




// //without using function
// #include<stdio.h>

// int main()
// {
//     char name[]="Khan";
//     char *ptr;
//     ptr=&name[0];
//     while (*ptr!='\0')
//     {
//         printf("%c",*ptr);
//         ptr++;
//     }
    
//     return 0;
// }



//convenient way of printing strings
#include<stdio.h>

int main()
{
    char *name="Ayan Khan";//here we can write simply name[] also.
    printf("%s",name);
    return 0;
}
