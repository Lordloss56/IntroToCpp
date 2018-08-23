#include <iostream>
#include "piggy.h"

void printPiggy(piggy target)
{
	std::cout << "You have " << target.oneDollars << " 1 dollar bills." << std::endl;
	std::cout << "You have " << target.twoDollars << " 2 dollar bills." << std::endl;
	std::cout << "You have " << target.fiveDollars << " 5 dollar bills." << std::endl;
	std::cout << "You have " << target.quarters << " quarters." << std::endl;
	std::cout << "You have " << target.dimes << " dimes." << std::endl;
	std::cout << "You have " << target.nickels << " nickels." << std::endl;
	std::cout << "You have " << target.pennies << " pennies." << std::endl;
	
}

float calcPiggybankNotes(piggy target)
{
	return 	target.oneDollars     +

		    target.twoDollars * 2 +

		    target.fiveDollars * 5;
}

float calcPiggybankCoins(piggy target) {

	return 	target.quarters * 0.25f +

		    target.dimes * 0.1f +

	     	target.nickels * 0.05f +
		    target.pennies * 0.01f;
}

float calcPiggybankTotal(piggy target)
{
	return calcPiggybankNotes(target) + calcPiggybankCoins(target);
}