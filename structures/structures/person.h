#pragma once
struct person
{// defining a struct
	//the age of person in years
	int age;
	//pocket change of person given in gbp
	float cash;

	//amount of rewards points at local deli
	int points;
};

void printPerson(person target);