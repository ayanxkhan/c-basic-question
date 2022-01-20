#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    area=PI*(radius*radius);
    printf("The area of circle is %f",area);
    
    return 0;
}