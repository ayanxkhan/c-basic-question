#include<stdio.h>

int main()
{
     FILE *ptr;
     int num;
     printf("Enter the number you want multiplication table of:");
     scanf("%d",&num);
     ptr=fopen("table.txt","w");
     for(int i=1;i<11;i++)
     {
         fprintf(ptr,"%dx%d=%d\n",num,i,num*i);
     }


    return 0;
}