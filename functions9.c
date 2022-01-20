#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    fact(n);
    printf("Hello World\n");
    fact(n);
    fact(n);
    fact(n);
    return 0;
}
int fact(int x)
{
     int factorial=1;
    printf("Enter any number:");
    scanf("%d",&x);

    for(int i=x;i>0;i--)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d\n",x,factorial);
}