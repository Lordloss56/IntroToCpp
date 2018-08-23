#include <iostream>
#include"person.h"
#include "piggy.h"
#include"student.h"



int main()
{
	// creating a variable with it
	
	person paul = {};
	person jon = { 15, 1000, 20 };

	printPerson(jon);
	//passing structs
	//printing structs
	/*
	//closed portion of class
	piggy ham = { 8, 3, 5, 6, 7, 15, 70};
	float notes = calcPiggybankNotes(ham);
	float coins = calcPiggybankCoins(ham);
	float total = calcPiggybankTotal(ham);

	printPiggy(ham);
	*/
	student jack = {12006, 1, 45};
	student john = {12007, 2, 29};
	student jacob = {12008, 2, 32};
	student james = {12009, 1, 40};
	student jason = {1210, 2, 47}; 
	student jackson = {1211, 2, 28};
	printStudent(john);
	student scrRoster[] = { {12006, 1, 45},{12007, 2, 29},{12008, 2, 32},{12009,1,40},{12010,2,47},{12011,2,28} };
	float averageScore = avgTestScore(roster, 4);
	float median = medianScore(roster, 4);
	
	
	return 0;
}