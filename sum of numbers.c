//program to determine sum of five numbers
#include<stdio.h>
int main()
{
int num1 , num2, num3, num4, num5;
int sum;
printf("Enter five numbers: \n");
scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
sum= num1+num2+num3+num4+num5;
printf("The sum of numbers is :%d",sum);
return 0;
}