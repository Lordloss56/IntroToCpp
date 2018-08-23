#include "person.h"
#include <iostream>


//passing structs
void printPerson(person target)
{
	std::cout << "Age:" << target.age << std::endl;
	std::cout << "cash:" << target.cash << std::endl;
	std::cout << "points:" << target.points << std::endl;
}
