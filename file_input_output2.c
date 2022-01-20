// #include<stdio.h>

// int main()
// {
    // FILE *ptr;
    // ptr=fopen("getcdemo.txt","r");
    // // char c=fgetc(ptr);//fgetc is used to read the character of your file character by character
    // // printf("The value of character is %c\n",c);

    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // return 0;

    //now fputc
   #include<stdio.h>
   
   int main()
   {
       FILE *ptr;
       ptr=fopen("putcdemo.txt","w");
       putc('a',ptr);
       putc('y',ptr);
       putc('a',ptr);
       putc('n',ptr);
       fclose(ptr);
       return 0;
   }



