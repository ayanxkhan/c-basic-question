#include<stdio.h>
void printstar(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c",'*');
    }
}
    
void main()
{
    printstar(7);
}