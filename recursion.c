//A function which calls itself is called recursive function.
#include<stdio.h>
int fact(int x);

int main()
{
    int a=5;
    printf("The factorial of %d is %d",a,fact(a));
    return 0;
}
int fact(int x)
{
    if(x==1||x==0)
    {
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}