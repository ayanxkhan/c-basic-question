#include<stdio.h>
int main()
{
    //we use sizeof() opertor to get the size of any datatype 
    //But size of datatype differs from architecture to architecture
    printf("size of int is %lu\n",sizeof(int));
    printf("size of char is %lu\n",sizeof(char));
    printf("size of float is %lu\n",sizeof(float));
    printf("size of double is %lu\n",sizeof(double));
    printf("size of long is %lu\n",sizeof(long));

 return 0;

}