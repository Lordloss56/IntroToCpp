#pragma once
struct piggy
{
	int oneDollars;

	int twoDollars;

	int fiveDollars;

	int quarters;

	int dimes;

	int nickels;

	int pennies;
	float calcPiggybankNotes(piggy target);
	float calcPiggybankCoins(piggy target);


};







float calcPiggybankTotal(piggy target);
void printPiggy(piggy target);