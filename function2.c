#include<stdio.h>
int great(int i,int j)
{
    if(i>j)
    {
        printf("a is greater than b\n");

    }else
    {
        printf("b is greater than a\n");
    }
}
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=great(a,b);

	return 0;
}
