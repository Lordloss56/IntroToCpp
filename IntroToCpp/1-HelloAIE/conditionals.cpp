#include <iostream>

int main()
{

	bool val1 = 4 == 5;
	bool val2 = 1 < 6;
	bool val3 = true && true;
	bool val4 = false || false || false || false || false || false || true;
	 
	if (val1)
	{
		std::cout << "it is true" << std::endl;
	}
	if (7)
	{
		std::cout << "it true";
	}
	else 
	{
		std::cout << "it false";
	}
	return 0;
}