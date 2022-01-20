#include<stdio.h>
float avg(int x,int y,int z);
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
    return 0;
}
float avg(int x,int y,int z)
{
    float c;
    c=(float)(x+y+z)/3;
    printf("The average of three numbers is %f",c);
}