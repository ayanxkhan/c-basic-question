// star pattern
#include<stdio.h>
int main()
{
    // int i,j;
    // for(i=1;i<6;i++)
    // {
    //    for(j=1;j<=i;j++)
    //    {
    //        printf("*");

    //    }
    //    printf("\n");

    //  }
 int i,j;
    for(i=6;i>1;i--)
    {
       for(j=1;j<=i-1;j++)
       {
           printf("*");

       }
       printf("\n");

    }
    return 0;
}
