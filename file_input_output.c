#include<stdio.h>

int main()
{
    FILE *ptr;/*here we have created a structure called FILE
    and a pointer.fopen is used to open a file*/
    ptr=fopen("sample.txt","r");//for reading the file
    // ptr=fopen("sample.txt","w");//for writting to the file
    int num1;
    int num2;
    fscanf(ptr,"%d",&num1);//fscanf is used to read the content of any file
    fscanf(ptr,"%d",&num2);
    printf("The value of num1 is %d\n",num1);
    printf("The value of num2 is %d\n",num2);
    fclose(ptr);//its a good practice to close a file
    return 0;
}