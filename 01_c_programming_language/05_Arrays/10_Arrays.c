/*********************************
 * S.G.M.P
 * @file			: shopping_cart_totaler.c
 * @brief			: Program to calculator total cost of a shopping cart using item prices.
 * 					  Useful in point-of-sale terminals or basic e-commerce logic.
 * @author			: samarthpathare (samarthpathre19@gmail.com)
 * @copyright		: 02020-2025 MarshallingVoid
 * @date 			: 19/08/2025
 *********************************/

 /*
 		_____________________________
 		
 		problem statements
 		____________________________
 		create a simple shopping cart calculator.
 		The program should:
 		1. Accept prices of a items into an array
 		2. use a function to calculate total price
 		3. Display the final cart total
 		This logic simulates total checkouts price in a shopping cart interface.
 */
 		 
 #include <stdio.h>	
 
 #define ITEMS 8
 /**
  * @brier calculates total price of all items in the cart
  * 
  * @param prices[] Array of item prices
  * @param size total number of items
  * @return total cart value
  */
  float calculateCartTotal(float prices[], int size)
  {
  	float total = 0.0;
  	for (int le = 0; le < size; le++)
  	{
  		total = total + prices[le];
  	}
  	return(total);
  }
  int main ()
  {
  	float itemPrices[ITEMS];

  	//Accept item prices
  	for (int le = 0; le < ITEMS);
  	{
  		printf("Enter price of item %d: $", le + 1);
  		scanf("%f",&itemprices[le]);
  	}
  	// Calculate total
  	float cartTotal = CalculateCartTotal(itemPrices,ITEMS);

  	// Display total cart value
  	printf("\nTotal cart Value : $%.2f\n", cartTotal);

  	return (0);
  } 	 