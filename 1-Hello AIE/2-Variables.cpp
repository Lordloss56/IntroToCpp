#include <iostream>


int main()
{
	std::cout << "its the second program!" << std::endl;

	int age = 21; //my age

	std::cout << "here is my age" << age << std::endl;

	//prompt for users age
	int userAge = -1;

	std::cout << "what is your age?" << std::endl;
	std::cin >> userAge;

	std::cout << "Geez, your age is" << userAge << "youre old" << std::endl;
	//A)
	int numberA = 5;
	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;

	//B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;

	//C)
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;

	//D)
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D " << somethingD << std::endl;

	//E)
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	//F)
	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;
	
	//celsius converter
	int celsius = -2;
	int farenheight = -1;

	std::cin >> celsius;

	farenheight = celsius * 1.8 + 32;

	std::cout << farenheight << std::endl;
	system("pause");


	
	return 0;
}