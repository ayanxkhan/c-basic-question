#include<stdio.h>
int main()
{
    int a,i,r=1;
    printf("Enter any number:");
    scanf("%d",&a);

    for(i=a;i>0;i--)
    {
        r=r*i;
    }
    printf("\n factorial value=%d\n",r);

/* i=5;
r= 1*5=5
r= 5*4=20
r= 20*3=60
r= 60*2=120
r= 120*1=120*/


return 0;
}