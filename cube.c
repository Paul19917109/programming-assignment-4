// program to determine cube of numbers
#include<stdio.h>

int main()
{
    int i;
    for(i = 1; i<=5; i++)
    {
       int cube = i * i * i;
       printf("The number is: %d ", i);
       printf("and the cube is :%d\n",cube );
    }
    return 0;
}