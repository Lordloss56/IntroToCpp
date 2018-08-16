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

	return 0;
}