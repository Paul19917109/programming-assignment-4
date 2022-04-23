//rogram to determine old and even number
#include<stdio.h>

int main()
{
int x;
    printf("enter the number\n");
    scanf("%d",&x);
    int z=x%2;
    if (z==0)
    {
    printf("the number is even");
    }
    else{
     printf("the number is odd");
    }
    
    return 0;
}