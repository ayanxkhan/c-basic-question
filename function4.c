#include<stdio.h>
void check(int i);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    check(a);
}
void check(int i)
{
    if (i>0)
    {
        printf("positive number\n");

    }else{
        printf("Negative number\n");
    }
}
