#include<stdio.h>

int main()
{
   int num1,num2;
   char operator;
   printf("Enter the operation to be done:\n");
   scanf("%c", &operator);
   printf("Enter the first number:\n");
   scanf("%d", &num1);
   printf("Enter the second number:\n");
   scanf("%d", &num2);

   if(operator == '+'){
      int sum = num1 + num2;
      printf("The sum is: %d", sum);
   }
   else if(operator == '-'){
      int difference = num1 - num2;
      printf("The difference is: %d", difference);
   }
   else if(operator == '*'){
      int product = num1 * num2;
      printf("The product is: %d", product);
   }
   else if(operator == '/'){
      float divide = num1 / num2;
      printf("The division is: %f", divide);
   }
   else if(operator == '%'){
      int modulus = num1 % num2;
      printf("The modulus is: %d", modulus);
   }
   else{
   printf("You have entered the wrong symbol");
   }
return 0;
}