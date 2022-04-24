//program  for qualification of discount
#include<stdio.h>
int main()
{
int x;
printf("Enter the price:");
scanf("%d",&x);
if(x >=5000)
{
int discount=x*0.1;
int buying_price = x-discount;
printf("You qualify for a discount of %d ", discount);
printf("You are supposed to pay %d", buying_price);
}
else
{
printf("No discount");
}
return 0;
}