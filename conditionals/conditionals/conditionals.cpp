#include <iostream>

int main()
{
	int numA = -1;
	int numB = -1;
	std::cout << "what is your age" << std::endl;
	std::cin >> numA;

	if (numA >= 18)
	{
		std::cout << "you seem to be an adult" << std::endl;

	    if (numA >= 50)
		{
			std::cout << "youre elidgible to join AARP" << std::endl;
			if (numA >= 65)
			{
				std::cout << "You are elidgible for retirement benefits" << std::endl;
			}
		}
	
	}

	else if (numA < 18)
	{
		std::cout << "you are too young for this site" << std::endl;
	}

	system("pause");


	std::cout << "give me a number" << std::endl;
	std::cin >> numB;
	if (numB == 0)
	{
		std::cout << "your number was " << numB << " and it is even" << std::endl;
	}
	else if (numB == 1)
	{
		std::cout << "your number was " << numB << " and it is odd" << std::endl;
	}


	system("pause");

	std::cout << "give me a number" << std::endl;
	int numC = -1;
	std::cin >> numC; 

	if (numC <= 15)
	{
		std::cout << "15" << std::endl;
	}
	if (numC <= 30 )
	{
		std::cout << numC << std::endl;
	}
	if (numC > 30)
	{
		std::cout << "30" << std::endl;
	}
	system("pause");

	int sumAdd = numA + numB;
	int sumDiv = numA / numB;
	int sumSub = numA - numB;
	int sumMult = numA * numB;

	if (sumAdd)
	{
		std::cout << numA + numB << std::endl;
	}

	system("pause");
	return 0;
}