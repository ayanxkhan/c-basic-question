#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    struct student Ayan, Aatif, Shachee, Sohail;
    Ayan.id = 1;
    Aatif.id = 2;
    Shachee.id = 3;
    Sohail.id = 4;
    Ayan.marks = 480;
    Aatif.marks = 490;
    Shachee.marks = 480;
    Sohail.marks = 480;
    Ayan.fav_char = 'd';
    Aatif.fav_char = 'a';
    Shachee.fav_char = 's';
    Sohail.fav_char = 'p';
    printf("Ayan got %d marks\n", Ayan.marks);
    printf("Aatif got %d marks\n", Aatif.marks);
    printf("Shachee got %d marks\n", Shachee.marks);
    printf("Sohail got %d marks\n", Sohail.marks);
    printf("\n");
    printf("Ayan's id is %d\n", Ayan.id);
    printf("Aatif's id is %d\n", Aatif.id);
    printf("Shachee's id is %d\n", Shachee.id);
    printf("Sohail's id is %d\n", Sohail.id);
    printf("\n");
    printf("Ayan's favourite char is %c\n", Ayan.fav_char);
    printf("Aatif's favourite char is %c\n", Aatif.fav_char);
    printf("Shachee's favourite char is %c\n", Shachee.fav_char);
    printf("Sohail's favourite char is %c\n", Sohail.fav_char);

    return 0;
}