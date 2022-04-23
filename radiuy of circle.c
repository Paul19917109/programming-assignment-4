// program for area of  circle
#include<stdio.h>

int main()
{
float radius;
float pi= (22/7);
float area;
printf("Enter the radius of circle: ");
scanf("%f",& radius);
area =pi*radius*radius;
printf("The area is:%0.2f cm²",area);
 
    return 0;
}