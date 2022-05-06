// C program to calculate if someone qualifies for a discount using function
#include <stdio.h>

int main() {
    int price, discount, amount;
    int calc_discount(){
        printf("Enter the price of the item:\n");
        scanf("%d", &price);
        if(price>=5000){
            discount = 0.1 * price;
            amount = price - discount;
            printf("You qualify for a discount of: %d\n", discount);
            printf("Amount payable for the product is: %d", amount);
        }
        else{
             printf("You don't qualify for any discount\n");
            printf("Amount payable for the product is: %d", price);
        }
    }
    return calc_discount();
}