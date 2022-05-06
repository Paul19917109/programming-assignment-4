//functions in c
#include<stdio.h>
int main ()
{
double  cube (float x );//function protype 
float square (float y);//function protype
float quadruple (float z);//function protype
float input , output_1, output_2, output_3;

printf("enter a number");
scanf("%f",&input);

output_1=square(input);//function calling
output_2=cube(input);//function calling
output_3=quadruple(input);//function calling

printf("The square of %.2f is %.2f\n", input , output_1);
printf("the cube of %.2f is /%.2f\n ", input, output_2);
printf("the quadruple of %.2f is /%.2f\n ", input, output_3);
}

double cube (float x)//function definition
{
int x_cubed;
x_cubed=x*x*x;
}

float square (float y)//function definition
{
float y_squared;
y_squared=y*y;
}
    