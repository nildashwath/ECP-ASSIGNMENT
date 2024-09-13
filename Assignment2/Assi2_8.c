/*
Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.
*/

#include <stdio.h>

int main() 
{
    int quantity;
    float unitPrice = 5.0;
    float discount = 0.0;
    float totalPrice;

    // Ask the user to enter the quantity
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate the discount based on the quantity
    if (quantity > 50) 
	{
        discount = 0.15; // 15% discount
    } 
	else if (quantity > 30) 
	{
        discount = 0.10; // 10% discount
    }

    // Calculate the total price after discount
    totalPrice = quantity * unitPrice;
    totalPrice = totalPrice - (totalPrice * discount);

    // Display the total price
    printf("The total price after discount is Rs %.2f\n", totalPrice);

    return 0;
}

