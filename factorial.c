// #include<stdio.h>
// int main()
// {
//     int a,i,r=1;
//     printf("Enter any number:");
//     scanf("%d",&a);

//     for(i=a;i>0;i--)
//     {
//         r=r*i;
//     }
//     printf("\n factorial value=%d\n",r);

// /* i=5;
// r= 1*5=5
// r= 5*4=20
// r= 20*3=60
// r= 60*2=120
// r= 120*1=120*/


// return 0;
// }



#include<stdio.h>

int main()
{
    int num,fact=1;
    printf("Enter any number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}